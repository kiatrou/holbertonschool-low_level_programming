#include "main.h"
/**
 * _strncpy - a function that copies a
 * specific number of characters from one
 * string to another.
 * @dest: destination string where the
 * characters are copied to.
 * @src: source string from where the
 * characters are copied from.
 * @n: number of characters copied from
 * src to dest.
 *
 * Return: returns destination string
 *
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	/**
	 * copies characters from src to dest up
	 * to n characters or until NULL of src is
	 * reached
	 */
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	/*Remaining characters to fill dest filled with NULL*/
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	/*Returns dest string*/
	return (dest);
}
