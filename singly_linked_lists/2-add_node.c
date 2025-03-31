#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a
 * list_t list
 * @head: a pointer to the head of a linked list
 * @str: string being duplicated and stored into
 * a new node
 * Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int str_length = 0;
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	/*Calculating the length of the string*/
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	/*Allocating memory for new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	copy = strdup(str);
	/*Check if strdup fails*/
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*sets str field of new node to copy*/
	new_node->str = copy;
	/*set length of new node*/
	new_node->len = str_length;
	/*links node to the head of list*/
	new_node->next = *head;
	/*updates head with new node*/
	*head = new_node;
	return (new_node);
}
