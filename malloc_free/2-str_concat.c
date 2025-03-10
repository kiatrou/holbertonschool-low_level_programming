#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: destination string, where the src
 * string will be added.
 * @s2: source string
 *
 * Return: if successful, return concatenated
 * string. if string equals null, returns an
 * empty string. if memory allocation fails,
 * return a NULL.
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	char *new_str;
	int s1_count;
	int s2_count;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	new_str = malloc(s1_len + s2_len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	/*Copy s1 into new_str, then s2 after*/
	for (s1_count = 0; s1_count < s1_len; s1_count++)
	{
		new_str[s1_count] = s1[s1_count];
	}
	for (s2_count = 0; s2_count < s2_len; s2_count++)
	{
		new_str[s1_len + s2_count] = s2[s2_count];
	}
	new_str[s1_len + s2_len] = '\0';
	return (new_str);
}
