#include "main.h"
/**
 * print_sign - prints sign according to numerical value
 * @n: integer being checked
 *
 * Return: 1 if number is positive, 0 is number is zero, -1 if else.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
