#include "main.h"
/**
 * *_strcpy - copies the string pointed
 * by src to the buffer pointed to
 * by dest
 * @dest: where the copied string will
 * go
 * @src: the string being copied
 *
 * Return: Returns copied string
*/
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;
	/**
	 * making this char variable will
	 * store the original address of
	 * dest to a new pointer, that way
	 * it can return to the original
	 * destination after copying
	 */

	/*Repeat each character of src string*/
	while (*src != '\0')
	{
		*dest = *src;
		/*Copies characters from src to dest*/
		dest++;
		/*Moves dest pointer to next position*/
		src++;
		/*Moves src pointer to next character*/
	}
	*dest = '\0';
	/*Null-terminate the dest string*/
	return (original_dest);
}
