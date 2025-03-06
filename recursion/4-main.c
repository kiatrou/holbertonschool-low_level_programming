#include <stdio.h>
#include "main.h"
/**
 * main - return value of x raised
 * by the power of y
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int r;

	r = _pow_recursion(1, 10);
	printf("%d\n", r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%d\n", r);
	r = _pow_recursion(5, -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}
