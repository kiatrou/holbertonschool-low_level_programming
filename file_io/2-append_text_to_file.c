#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string
 * to the file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int new_file;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	new_file = open(filename, O_WRONLY | O_APPEND);
	if (new_file == -1)
	{
		return (-1);
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	if (write(new_file, text_content, length) != length)
	{
		close(new_file);
		return (-1);
	}
	close(new_file);
	return (1);
}
