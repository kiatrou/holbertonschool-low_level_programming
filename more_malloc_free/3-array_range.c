#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to newly created array
 * if min is more than max, return NULL
 * if malloc fails, return NULL
*/
int *array_range(int min, int max)
{
	int *range = 0;
	int i;

	/*If min > max, return NULL*/
	if (min > max)
	{
		return (NULL);
	}

	/*Allocate memory for the array*/
	range = malloc(sizeof(int) * (max - min + 1));

	/*if malloc fails*/
	if (range == NULL)
	{
		return (NULL);
	}

	/*Fill array with values from min to max*/
	for (i = 0; i < (max - min + 1); i++)
	{
		range[i] = min + i;
	}
	return (range);
}
