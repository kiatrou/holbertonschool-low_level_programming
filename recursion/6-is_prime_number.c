#include "main.h"
/**
 * is_prime_number - checks if n is a
 * prime number.
 * @n: number being checked
 *
 * Return: returns 1 if prime number and
 * 0 if not.
 *
 * is_divisible - checks if n is divisible
 * @n: number being checked
 * @i: number being divided by
 *
 * Return: if divisible, returns 1
*/
int sqrt_helper(int n, int base)
{
	if (base * base == n)
	{
		return (base);
	}
	if (base * base > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, base + 1));
}

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

int is_divisible(int n, int i)
{
	if (i > _sqrt_recursion(n))
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	return (is_divisible(n, i + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_divisible(n, 2) == 0);
}
