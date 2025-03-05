#include "main.h"
/**
 * _puts_recursion - this function prints a string
 * followed by a new line using recursion
 * and not a loop
 * @s: pointer to string
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
	else
	{
		_putchar('\n');
	}
}
