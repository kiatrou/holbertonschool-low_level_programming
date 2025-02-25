#include "main.h"
/**
 * print_square - prints a square according to the size int
 * @size: size of squares
 *
*/
void print_square(int size)
{
	int height = 0;
	int width = 0;

	if (size > 0)
	{
		while (height < size)
		{
			width = 0;

			while (width < size)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
			height++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
