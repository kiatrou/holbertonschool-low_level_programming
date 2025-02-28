#include "main.h"
/**
 * _strcmp - compares two null-
 * terminated strings by character
 * until it finds a mismatch or the
 * end of a string.
 * @s1: first string
 * @s2: second string
 *
 * Return: integer value based on
 * comparison result.
*/
int _strcmp(char *s1, char *s2)
{
	/*While both strings are not empty*/
	while (*s1 && *s2)
	{
		/*If characters don't match*/
		if (*s1 != *s2)
		{
			/*return difference between them*/
			return (*s1 - *s2);
		}
		s1++;
		s2++;

		/*If one str ends before another, compare null*/
		return (*s1 - *s2);
	}
}
