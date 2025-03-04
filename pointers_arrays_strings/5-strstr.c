#include "main.h"
/**
 * _strstr - finds the first occurence
 * of a substring within a string
 * @haystack: the string that is being
 * searched for the substring
 * @needle: the substring being searched
 * for in haystack.
 *
 * Return: If needle is found, returns a
 * pointer to the first occurence of needle.
 * If needle is not found, return NULL.
*/
char *_strstr(char *haystack, char *needle)
{
	int count_hay = 0;
	/*Counts through haystack string*/
	int count_nee = 0;
	/*Counts through needle string*/

	/*Check if needle is empty*/
	if (*needle == '\0')
	{
		return (haystack);
		/*If empty, return pointer to start of haystack*/
	}

	while (haystack[count_hay] != '\0')
	{
		count_nee = 0;
		/*reset count to avoid errors*/

		/*If first char matches, compare further*/
		if (haystack[count_hay] == needle[count_nee])
		{
			/*loop through needle to see if chars match*/
			while (haystack[count_hay + count_nee] ==
			needle[count_nee])
			{
				/*increment counters while they match*/
				count_nee++;
			}

			/*if checked all chars, return start of match*/
			if (needle[count_nee] == '\0')
			{
				return (&haystack[count_hay]);
				/*Returns pointer to beginning of match*/
			}
		}
		count_hay++;
	}
	return (0);
	/*If there isn't a match, return NULL*/
}
