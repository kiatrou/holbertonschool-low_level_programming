#include "main.h"
/**
 * _strpbrk - finds the first occurance of
 * any character from accept string in
 * s string.
 * @s: pointer to string
 * @accept: characters being checked
 * for
 *
 * Return: a pointer to the character in
 * s. if not found, return NULL/0
*/
char *_strpbrk(char *s, char *accept)
{
	int count_s = 0;
	/*Count for string*/
	int count_a = 0;
	/*Count for accept string*/

	/*Loop iterates through string*/
	while (s[count_s] != '\0')
	{
		count_a = 0;
		/*Resetting count to avoid errors*/

		/*Loop through accept string*/
		while (accept[count_a] != '\0')
		{
			/*if there's a match*/
			if (s[count_s] == accept[count_a])
			{
				return (&s[count_s]);
				/**
				 * Returns pointer to matching
				 * character in string
				 */
			}
			count_a++;
		}
		count_s++;
	}
	return (0);
	/*If there isn't a match, return NULL*/
}
