#include "main.h"
/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase.
 * @s: string of characters
 *
 * Return: returns modified string
*/
char *string_toupper(char *s)
{
	char *original_s = s;

	/*Iterate through each character of string*/
	while (*s != '\0')
	{
		/*Check if char is lowercase*/
		if (*s >= 'a' && *s <= 'z')
		{
			/*Converts to upper by subbing difference*/
			*s = *s - 'a' + 'A';
		}
		s++;
	}
	return (original_s);
}
