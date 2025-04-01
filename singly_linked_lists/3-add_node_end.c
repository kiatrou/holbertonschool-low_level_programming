#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the head of a linked list
 * @str: string being duplicated and stored into
 * a new node
 * Return: new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	list_t *new_node;
	list_t *current = *head;
	/*Pointer to traverse list and find last node*/
	int str_length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	new_node = malloc(sizeof(list_t));
	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = copy;
	new_node->len = str_length;
	new_node->next = NULL;
	/*Checks if list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*Traverse to last node*/
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
