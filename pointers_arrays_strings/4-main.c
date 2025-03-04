#include <stdio.h>
#include "main.h"
/**
 * main - checks for the first occurance
 * in the string s of any of the bytes in
 * the string accept.
 *
 * Return: Alawys 0 (Success)
*/
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
