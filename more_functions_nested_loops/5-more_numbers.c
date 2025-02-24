#include "main.h"
/**
 * more_numbers - Prints numbers 0 to 14 ten times
 *
 *
*/
void more_numbers(void)
{
	int times = 0;
	int nums;

	while (times++ <= 9)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
			{
				_putchar((nums / 10) + '0');
			}
			_putchar((nums % 10) + '0');
		}
		_putchar('\n');
	}
}
