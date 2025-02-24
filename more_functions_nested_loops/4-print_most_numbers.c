#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9
 * excluding 2 and 4
 *
 *
*/
void print_most_numbers(void)
{
	char nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		if (nums != '2' && nums != '4')
		{
			_putchar(nums);
		}
	}
	_putchar('\n');
}
