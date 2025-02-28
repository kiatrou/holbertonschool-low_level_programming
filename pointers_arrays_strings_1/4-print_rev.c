#include "main.h"
/**
 * print_rev - function that prints a
 * string in reverse
 * @s: string
 *
*/
void print_rev(char *s)
{
	char *end = s;


	while (*end != '\0')
	{
		end++; /*Move to the end of the string by one*/
	}

	while (end != s)
	{
		end--; /*Moves backwards by one*/
		_putchar(*end);
	}
	_putchar('\n');
}
