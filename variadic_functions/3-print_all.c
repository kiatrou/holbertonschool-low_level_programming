#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: types of arguments being passed to
 * the function
 *
 * Return: None
*/
void print_all(const char * const format, ...)
{
	int count = 0;
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	int first = 1; /* Flag to track first printed value */

	va_start(args, format);
	while (format && format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
			c = va_arg(args, int);
			break;
			case 'i':
			i = va_arg(args, int);
			break;
			case 'f':
			f = va_arg(args, double);
			break;
			case 's':
			s = va_arg(args, char *);
			s = s ? s : "(nil)";
			break;
			default:
			count++;
			continue; /* Skip invalid format characters */
		}
		if (!first)
		{
			printf(", "); /* Print separator before the next value */
		}

		first = 0; /* Mark first value as printed */

		/* Print the actual value */
		switch (format[count])
		{
			case 'c': printf("%c", c); break;
			case 'i': printf("%d", i); break;
			case 'f': printf("%f", f); break;
			case 's': printf("%s", s); break;
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
