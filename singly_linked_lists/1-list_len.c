#include "lists.h"
#include <stdio.h>
/**
 * print_len - returns a number of elements in a
 * linked list
 * @h: pointer to header of linked list
 *
 * Return: number of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
