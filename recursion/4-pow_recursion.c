#include "main.h"
/**
 * _pow_recursion - return the value of
 * x raised to the power of y (basically,
 * you multiply the base number by itself
 * for the number of times specified by the
 * exponent)
 * @x: base number
 * @y: exponent
 *
 * Return: if less than 0, return -1
 * if equal to 0, return 1 (because anything
 * raised to the power of 0 is 1)
 * else return value of x raised to the power
 * of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
