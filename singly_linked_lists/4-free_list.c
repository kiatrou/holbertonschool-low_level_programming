#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: head of the list
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		/*Save the current node*/
		head = head->next;
		/*Move to the next node*/
		free(temp->str);
		/*Free the data (if necessary)*/
		free(temp);
		/*Free the node itself*/
	}
}
