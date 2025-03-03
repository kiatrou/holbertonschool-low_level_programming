#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string being printed
 *
*/
void puts_half(char *str)
{
	int length = 0;
	int print_start;

	while (str[length] != '\0')
	{
		length++;
	}
	/*Calculates to count for odd lengths*/
	print_start = (length + 1) / 2;

	/*Prints the second half of string*/
	while (str[print_start] != '\0')
	{
		_putchar(str[print_start]);
		print_start++;
	}
	_putchar('\n');
}
