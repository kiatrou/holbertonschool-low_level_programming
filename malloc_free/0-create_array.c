#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of chars
 * @size: the number of elements (chararacters)
 * to allocate in the array.
 * @c: the character with which the array will be
 * initialised.
 *
 * Return: If memory allocation fails or if the size
 * is zero, return NULL. If successful, return the
 * pointer to the allocated memory.
 *
 * Memory Allocation - using malloc to dynamically
 * allocate memory on the heap. The amount of memory
 * allocated is 'size * sizeof(char)'. Since char is
 * always 1, this means memory for size characters is
 * being allocated. 'char *array' the return value of
 * malloc is assigned to the pointer array, which will
 * point to the newly allocated memory.
 *
 * Loop - the for loop is responsible for initialising
 * the newly allocated array with the character c. It
 * starts at count 0 and iterated through the array until
 * count reaches size (total number of elements in the
 * array)
*/
char *create_array(unsigned int size, char c)
{
	/*Memory allocation*/
	char *array = malloc(size * sizeof(char));
	unsigned int count;

	/*if size is 0*/
	if (size == 0 || array == 0)
	{
		return (NULL);
	}

	/*Loop through each element of array*/
	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
