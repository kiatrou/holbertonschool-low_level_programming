#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between the numbers
 * @n: the numbers being printed
 *
 * Return: None
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count; /*Count through args*/
	va_list args;
	unsigned int num;

	va_start(args, n);
	while (count < n)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && count < n - 1)
		{
			printf("%s", separator);
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
