#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * main - check code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
    int file_from, file_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    struct stat file_stat;

    /* Check if the number of arguments is correct */
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    /* Open the source file for reading */
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Open the destination file for writing (create if it doesn't exist, truncate if it does) */
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        exit(99);
    }

    /* Copy the content from file_from to file_to */
    while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(98);
        }
    }

    /* Check for errors reading the file */
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(file_from);
        close(file_to);
        exit(98);
    }

    /* Get the current permissions of file_to if it exists */
    if (stat(argv[2], &file_stat) == 0)
    {
        /* If the file already exists, do not change the permissions */
        if (fchmod(file_to, file_stat.st_mode) == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't set permissions on %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(100);
        }
    }
    else
    {
        /* If the file does not exist, set the correct permissions to rw-rw-r-- (644) */
        if (fchmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't set permissions on %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(100);
        }
    }

    /* Close the file descriptors */
    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }
    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}
