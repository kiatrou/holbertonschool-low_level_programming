#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings
 *
 * Return: None
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	char *strings;

	va_start(args, n);
	while (count < n)
	{
		strings = va_arg(args, char *);
		printf("%s", strings);
		if (separator != NULL && count < n - 1)
		{
			printf("%s", separator);
		}
		if (strings == NULL)
		{
			printf("(nil)");
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
