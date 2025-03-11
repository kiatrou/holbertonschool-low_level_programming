#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates
 * memory using malloc
 * @b: bytes being allocated
 *
 * Return: if allocating memory fails,
 * function will exit and return 98.
 * if successful, it will return the
 * pointer to allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *mem = 0;
	/*Pointer to created memory*/

	mem = malloc(b);

	/*If memory allocation fails*/
	if (mem == NULL)
	{
		exit(98);
	}

	/*If it succeeds*/
	return (mem);
}
