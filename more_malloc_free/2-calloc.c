#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - mimic of the function calloc
 * that allocates memory for an array using
 * malloc
 * @nmemb: number of elements
 * @size: size of bytes each element
 *
 * Return: pointer to allocated memory if
 * successful. if either variables are 0 then
 * return NULL. if memory allocation fails
 * also return 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *mem_ptr;
	unsigned int i;

	/*Check if either nmemb or size is 0, return NULL in that case*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/*Allocate memory using malloc*/
	ptr = malloc(nmemb * size);

	/*If malloc fails, return NULL*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/*Manually set the allocated memory to zero*/
	mem_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		mem_ptr[i] = 0;
	}
	return (ptr);
}
