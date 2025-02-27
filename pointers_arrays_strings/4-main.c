#include <stdio.h>
#include "main.h"
/**
 * main - prints the string in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
