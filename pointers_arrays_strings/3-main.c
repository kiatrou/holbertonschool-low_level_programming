#include <stdio.h>
#include "main.h"
/**
 * main - searches for the first character
 * in a string which matches a specified set
 * of characters and returns the length of
 * the string
 *
 * Return (0);
*/
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
