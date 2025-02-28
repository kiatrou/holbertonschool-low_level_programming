#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the elements of
 * an array
 * @a: array being used
 * @n: element being printed
 *
*/
void print_array(int *a, int n)
{
	int number_of_elements = 0;
	/*This counts how many elements in array*/

	while (number_of_elements < n)
	{
		printf("%d", *a);

		if (number_of_elements < n - 1)
		{
			printf(", ");
		}
		a++;
		number_of_elements++;
	}
	printf("\n");
}
