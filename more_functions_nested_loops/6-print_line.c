#include "main.h"
/**
 * print_line - prints number of lines
 * @n: number of lines
 *
*/
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
