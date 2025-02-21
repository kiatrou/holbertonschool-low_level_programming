#include "main.h"
/**
 * print_last_digit - checks n result andprints the last digit of it
 * @n: integer being checked
 *
 * Return: returns the last digit of integer
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
