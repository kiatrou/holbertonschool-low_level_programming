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
	/*Return base as square root*/
	if (base * base == n)
	{
		return (base);
	}

	/*If exceeds n, return -1*/
	if (base * base > n)
	{
		return (-1);
	}

	/*Recursive, tries the next num*/
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
