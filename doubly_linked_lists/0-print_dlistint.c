#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a singly
 * linked list
 * @h: pointer to header of list
 *
 * Return: total number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)  /*Traverse the list*/
	{
		printf("%d\n", h->n);
		count++;  /*Count the node*/
		h = h->next;  /*Move to the next node*/
	}

	return (count);
	/*Return the total number of nodes*/
}
