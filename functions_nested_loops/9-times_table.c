#include "main.h"
/**
 * times_table - Prints 9s times tables
 *
*/
void times_table(void)
{
	int num, times, final;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			final = num * times;

			if (final <= 9)
				_putchar(' ');
			else
				_putchar((final / 10) + '0');

			_putchar((final % 10) + '0');
		}
	_putchar('\n');
	}
}
