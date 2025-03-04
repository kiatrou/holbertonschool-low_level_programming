#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of
 * two diagonals of a square matrix
 * of integers
 * @a: a pointer to a 1D array
 * representation of the square matrix
 * @size: the size of the square matrix
 * i.e number of rows and columns
 *
 * Note - += is equivalent to
 * C = C + A
*/
void print_diagsums(int *a, int size)
{
	/* Runs from top-left to bottom-right */
	int tlbr = 0;
	/* Runs from top-right to bottom-left */
	int trbl = 0;
	/* Counts through rows and columns */
	int count = 0;

	while (count < size)
	{
		tlbr += a[count * size + count];  /*Primary diagonal sum*/
		trbl += a[count * size + (size - 1 - count)];  /*Secondary diagonal sum*/
		count++;
	}

	/*Print sum of top left bottom right*/
	printf("%d, ", tlbr);

	/*Print sum of top right bottom left*/
	printf("%d\n", trbl);
}
