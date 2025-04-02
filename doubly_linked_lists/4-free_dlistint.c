#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint list
 * @head: head of list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		/*save current node*/
		head = head->next;
		/*move to next node*/
		free(temp);
		/*free the node itself*/
	}
}
