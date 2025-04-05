#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write
 * to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int new_file;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		if (write(new_file, text_content, length) != length)
		{
			close(new_file);
			return (-1);
		}
	}
	close(new_file);
	return (1);
}
