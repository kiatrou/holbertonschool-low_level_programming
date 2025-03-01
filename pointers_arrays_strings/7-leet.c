#include "main.h"
/**
 * leet - encodes a string into
 * 1337 (leetspeak)
 * @s: string being encoded
 *
 * Return: encoded string
*/
char *leet(char *s)
{
	int count = 0;

	/*Loop through string until NULL*/
	while (s[count] != '\0')
	{
		
		if (s[count] == 'a' || s[count] == 'A' ||
		s[count] == 'e' || s[count] == 'E' || s[count]
		== 'o' || s[count] == 'O' || s[count] == 't' ||
		s[count] == 'T' || s[count] == 'l' || s[count]
		== 'L')
		{
			/*Check if char is specified letter*/
			if (s[count] == 'a' || s[count] == 'A')
			{
				s[count] = '4';
			}
			else if (s[count] == 'e' || s[count] == 'E')
			{
				s[count] = '3';
			}
			else if (s[count] == 'o' || s[count] == 'O')
			{
				s[count] = '0';
			}
			else if (s[count] == 't' || s[count] == 'T')
			{
				s[count] = '7';
			}
			else if (s[count] == 'l' || s[count] == 'L')
			{
				s[count] = '1';
			}
		}
		count++;
	}
	return (s);
}
