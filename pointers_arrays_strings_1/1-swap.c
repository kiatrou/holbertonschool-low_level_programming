#include "main.h"
/**
 * swap_int - this swaps the values of two integers
 * @a: first value
 * @b: second value
 *
*/
void swap_int(int *a, int *b)
{
	int temp = *a; /*this creates a temporary location for the value of a*/

	*a = *b;
	*b = temp;
}
