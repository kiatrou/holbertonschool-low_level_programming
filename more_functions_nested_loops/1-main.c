#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
