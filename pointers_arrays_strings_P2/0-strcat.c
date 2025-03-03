#include "main.h"
/**
 * _strcat - concatenate (link together) a
 * string to the end of another
 * @dest: the destination string, where the
 * source string will be appended.
 * @src: the source string that will be
 * appended to the dest
 *
 * Return: combined strings
*/
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	/**
	 * Moves dest pointer to the end of the
	 * current string
	 */
	while (*dest != '\0')
	{
		dest++;
	}

	/*Append characters from src to dest*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/*Null-terminate the result*/
	*dest = '\0';

	/*Return pointer to dest string*/
	return (original_dest);
}
