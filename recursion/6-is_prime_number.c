#include "main.h"
/**
 * sqrt_helper - this function keeps track
 * of the current base for the sqaure root
 * of n. It controls how the trial and error
 * works and keeps updating base until it
 * either finds a square root or exceeds.
 * @n: number we are finding the square root of
 * @base: current number being tested to see if
 * its square equals the given number n.
 *
 * Return: (helper)Recurses next guess
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
/**
 * _sqrt_recursion - initiates the process of
 * finding the natural square root of a given
 * number.
 * @n: given number
 *
 * Return: if eqaul to n, return square root
 * if greater than n, return -1 because it is
 * not a natural square root
*/
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
/**
 * is_divisible - checks if n is divisible
 * @n: number being checked
 * @i: number being divided by
 *
 * Return: if divisible, returns 1
*/
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
/**
 * is_prime_number - checks if n is a
 * prime number.
 * @n: number being checked
 *
 * Return: returns 1 if prime number and
 * 0 if not.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_divisible(n, 2) == 0);
}
