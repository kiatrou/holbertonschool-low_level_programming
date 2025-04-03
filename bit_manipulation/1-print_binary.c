#include "main.h"
#include <stdio.h>
/**
 * print_binary - print the binary representation of
 * a number
 * @n: number being represented
*/
void print_binary(unsigned long int n)
{
	int count;
	int size = sizeof(n) * 8;
	/*Number of bits in an unsigned int*/
	int started = 0;
	/*To avoid leading zeros*/

	/*Loop from most significant bit and least significant*/
	for (count = size - 1; count >= 0; count--)
	{
		/*Extract the bit at position count*/
		if ((n >> count) & 1)
		{
			_putchar('1');
			started = 1;
			/*Mark that we've found the first 1*/
		}
		/*Only print 0s after first 1*/
		else if (started)
		{
			_putchar('0');
		}
	}
	/*If n is 0, just print 0*/
	if (!started)
	{
		_putchar('0');
	}
}
