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
	char *separator = " ,";

	va_start(args, format);
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
			case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
			case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
			case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			break;
			default:
			break;
		}
		if (format[count + 1] == 'c' || format[count + 1] == 'i' ||
		format[count + 1] == 'f' || format[count + 1] == 's')
		{
			printf("%s", separator);
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
