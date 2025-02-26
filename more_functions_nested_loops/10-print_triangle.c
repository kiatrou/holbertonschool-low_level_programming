#include "main.h"
/**
 * print_triangle - prints a triangle according to
 * number of #
 * @size: size of triangle using #
 *
*/
void print_triangle(int size)
{
	int height = 0;
	int width = 0;
	int tri = 0;

	if (size > 0)
	{
		while (height < size)
		{
			width = 0;

			while (width < size - height - 1)
			{
				_putchar(' ');
				width++;
			}
			tri = 0;

			while (tri <= height)
			{
				_putchar('#');
				tri++;
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
