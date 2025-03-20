#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant integer
 *
 * Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	unsigned int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	/*ends traversal of variadic function arguments*/
	return (sum);
}
/**
 * va_list - defines the variable, in this case 'args'
 * va_start - enables access to the variadic function
 * arguments
 * va_args - this returns the next argument from the list
 * and must be used repeatedly to access all arguments.
 * Specifying int means you're specifying the type of
 * argument to retrieve
