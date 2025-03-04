#include "main.h"
/**
 * _strspn - searches for the first
 * character in a string which matches
 * any of the specified characters and
 * returns the length of the string
 * in byte
 * @s: pointer to string
 * @accept: set of characters being
 * searched for
 *
 * Return: number of bytes the specified
 * characters (string) are
*/
unsigned int _strspn(char *s, char *accept)
{
	int count_s = 0;
	int count_accept = 0;
	int number_of_bytes = 0;
	/*Return value needed*/
	int found_match = 0;
	/*Being set to 1 means it's true*/

	/*Iterate through s*/
	while (s[count_s] != '\0')
	{
		found_match = 0;
		/*Loop through accept*/
		count_accept = 0;
		/*reset counter before checking accept*/
	
		while (accept[count_accept] != '\0')
		{	
			if (s[count_s] == accept[count_accept])
			{
				number_of_bytes++;
				/*increment bytes*/
				found_match = 1;
				/*match found*/
				break;
				/*stops the inner loop*/
			}
			count_accept++;
		}
		if (!found_match)
		{
			/*if no match was found*/
			break;
		}
		count_s++;
	}
	return (number_of_bytes);
}
