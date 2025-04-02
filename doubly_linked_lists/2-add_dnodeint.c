#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - returns the number of elements in a linked
 * list
 * @head: pointer to the head of list
 * @n: int being returned
 *
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	/*Stores int value into new node's n field*/

	/**
	 * Checks if list is not empty, sets previous
	 * pointer of current head node to point to new
	 * node to establish doubly linked list
	 */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;
	return (new_node);
}
