#include <stdio.h>
#include "main.h"
/**
 * main - gives string to be counted
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
