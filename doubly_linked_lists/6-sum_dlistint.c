#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - adds all of the data in a linked
 * list
 * @head: head of list
 *
 * Return: sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	/*Used to traverse list*/
	int sum = 0;

	/*Checks if list is empty*/
	if (head == NULL)
	{
		return (0);
	}
	/*Initialises current to head*/
	current = head;
	while (current != NULL)
	{
		/*Adds and sums elements*/
		sum += current->n;
		/*Moves to the next node*/
		current = current->next;
	}
	return (sum);
}
