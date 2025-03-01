#include <stdio.h>
#include "main.h"
/**
 * main - encodes a string into
 * 1337 (leetspeak)
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
