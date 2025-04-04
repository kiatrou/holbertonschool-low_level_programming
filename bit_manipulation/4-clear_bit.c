#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: pointer to number
 * @index: counter
 *
 * Return: 1 if successful, -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Ensures index is within range*/
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);

	return (1);
}
