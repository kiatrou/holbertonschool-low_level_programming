#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string being duplicated
 *
 * Return: return null if str is equal to
 * 0 or if memory allocation failed, if
 * successful, return copied string.
*/
char *_strdup(char *str)
{
	int count = 0;
	int str_length = 0;
	char *duplicate;

	/*Check if str is NULL*/
	if (str == NULL)
	{
		return (NULL);
	}

	/*Calculate length of string*/
	while (str[str_length] != '\0')
	{
		str_length++;
	}

	duplicate = malloc(str_length + 1);

	/*Copies string*/
	while (count < str_length)
	{
		duplicate[count] = str[count];
		count++;
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}
	
	/*Null-terminate new string*/
	duplicate[count] = '\0';

	return (duplicate);
}
