#include "main.h"
/**
 * rev_string - takes a string and reverses it
 * @s: string being reversed
 *
*/
void rev_string(char *s)
{
	char *end = s;

	while (*end != '\0') /*This loop counts to the end of the string*/
	{
		end++;
	}

	while (end != s) /*This loop prints the string in reverse*/
	{
		end--;
		_putchar(*end);
	}
	_putchar('\n');
}
