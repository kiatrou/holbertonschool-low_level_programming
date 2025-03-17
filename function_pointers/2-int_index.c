#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function that compares integers
 *
 * Return: if size is less than or equals 0
 * return -1. if elements don't match, return
 * -1. if match, return the number of matches found.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (count < size)
	{
		if (cmp(array[count]) != 0)
		{
			return (count);
		}
		count++;
	}

	return (-1);
}
