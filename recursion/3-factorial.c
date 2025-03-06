#include "main.h"
/**
 * factorial - works out and prints the
 * factorial of n
 * @n: number for equation
 *
 * Return: if less than 0, return -1.
 * if equal to 0, return 1 (because the
 * factorial of 0 is 1)
 * if else, return the factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
}
