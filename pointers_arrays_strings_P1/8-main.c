#include <stdio.h>
#include "main.h"
/**
 * main - prints elements of an array
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
