#include "main.h"
/**
 * cap_string - capitalises all words
 * of a string
 * @s: string being capitalised
 *
 * Return: capitalised string
*/
char *cap_string(char *s)
{
	int count = 0;
	/*Counts through the string*/
	int new_word = 1;
	/*Flag to track if at the start of word*/

	while (s[count] != '\0')
	{
		/*Check if current char is word seperator*/
		if (s[count] == ' ' || s[count] == '\t' ||
		s[count] == '\n' || s[count] == ',' || s[count]
		== ';' || s[count] == '.' || s[count] == '!' ||
		s[count] == '?' || s[count] == '"' || s[count]
		== '(' || s[count] == ')' || s[count] == '{' ||
		s[count] == '}')
		{
			/*Indicates next char is new word*/
			new_word = 1;
		}
		else if (new_word && s[count] >= 'a' && s[count]
		<= 'z')
		{
			s[count] = s[count] - 'a' + 'A';
			new_word = 0;
			/*After caps, no need the start of new word*/
		}
		else
		{
			new_word = 0;
			/*Inside word, reset the flag*/
		}
		count++;
	}
	return (s);
}
