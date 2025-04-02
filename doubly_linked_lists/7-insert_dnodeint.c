#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position
 * @h: head of list
 * @idx: index of list where node should be added
 * @n: int
 *
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/*Insert at index 0*/
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	/*Stops at node before insertion point*/
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	/*If reach end before correct idx*/
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*Insert middle or end*/
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
