#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a singly
 * linked list
 * @h: pointer to header of list
 *
 * Return: total number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)  /*Traverse the list*/
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			/*Print length and string*/
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;  /*Count the node*/
		h = h->next;  /*Move to the next node*/
	}

	return (count);
	/*Return the total number of nodes*/
}
