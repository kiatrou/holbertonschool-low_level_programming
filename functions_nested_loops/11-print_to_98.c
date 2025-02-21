#include <stdio.h>
/**
 * print_to_98 - prints all numbers from input to
 * 98 in order, seperated by comma and space.
 * @n: number to start counting at
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", n);
	}
}
