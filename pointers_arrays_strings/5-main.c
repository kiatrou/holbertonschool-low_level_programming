#include <stdio.h>
#include "main.h"
/**
 * main - finds first occurence of
 * a substring between two strings
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
