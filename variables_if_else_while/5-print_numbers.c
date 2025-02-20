#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ten = '0';

	while (ten <= '9')
	{
		putchar(ten);
		ten++;
	}
	putchar('\n');
	return (0);
}
