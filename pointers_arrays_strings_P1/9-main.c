#include <stdio.h>
#include "main.h"
/**
 * main - prints copied string
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
