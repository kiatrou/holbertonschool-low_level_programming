#include "main.h"
/**
 * _puts - this function prints a string
 * followed by a new line
 * @str: the string being printed
 *
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
