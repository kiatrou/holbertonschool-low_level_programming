#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given
 * index
 * @n: pointer to number
 * @index: counter
 *
 * Return: changes bit to 1 when successful and returns
 * -1 when not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/*Ensures index is within range*/
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	/*| is or - () a mask with indext set to 1*/
	/*This allows the bit to change and not the others*/
	*n = *n | (1 << index);

	return (1);
}
