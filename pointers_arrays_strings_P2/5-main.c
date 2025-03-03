#include <stdio.h>
#include "main.h"
/**
 * main - changes all lowercase of a
 * string to uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
