#include <stdio.h>
#include "main.h"
/**
 * main - print the factorial of
 * a given number.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	return (0);
}
