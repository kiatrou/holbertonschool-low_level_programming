#include "main.h"
/**
 * _strncat - concatenate a specified
 * number of characters from one string
 * to another
 * @dest: destination string to which
 * characters are appended
 * @src: source string from which
 * characters are copied
 * @n: number of characters to
 * appen from the src string to the
 * dest string
 *
 * Return: returns the pointer to the
 * end of the concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	/*Moves dest pointer to end of string*/
	while (*dest)
	{
		dest++;
	}

	/*Append n characters from src to dest*/
	while (n-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	/*Null-terminate resulting string*/
	*dest = '\0';

	return (dest);
}
