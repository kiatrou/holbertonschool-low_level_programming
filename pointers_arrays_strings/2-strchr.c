#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character being looked
 *
 * Return: the address of c
*/
char *_strchr(char *s, char c)
{
	int count = 0;
	/*Counts through string*/

	while (s[count] != '\0')
	{
		if (c == s[count])
		{
			return (&s[count]);
		}
		count++;
		if (c == s[count])
		{
			return (&s[count]);
		}
	}
	return (0);
}
