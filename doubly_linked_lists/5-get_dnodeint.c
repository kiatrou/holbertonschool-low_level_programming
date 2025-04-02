#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - finds and returns the nth node of a linked
 * list
 * @head: head of list
 * @index: index of node
 *
 * Return: nth node of list or NULL if fails
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	/*Traverses through list*/
	unsigned int count = 0;
	/*Counter that keeps track of nodes*/

	/*Check if list is empty*/
	if (head == NULL)
	{
		return (NULL);
	}
	/*Initialises traversal pointer*/
	current = head;
	/*Loop through list*/
	while (current != NULL)
	{
		/*If reached desired location*/
		if (count == index)
		{
			return (current);
		}
		/*Moves to the next node*/
		current = current->next;
		count++;
	}
	/*If loop ends withouth finding node*/
	return (NULL);
}
