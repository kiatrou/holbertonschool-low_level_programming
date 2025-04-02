#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes a node at index
 * of a linked list
 * @head: head of list
 * @index: index of node that will be deleted
 *
 * Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
			free(current);
		}
		return (1);
	}
	current = *head;
	while (current != NULL)
	{
		/*Found node to delete*/
		if (count == index)
		{
			/*If not first node, adjust prev pointer*/
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			/*If not last node, adjust next pointer*/
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			/*Free memory of node*/
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
