#include "main.h"
/**
 * _puts - this function prints a string
 * followed by a new line
 * @str: the string being printed
 *
*/
void _puts_recursion(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
