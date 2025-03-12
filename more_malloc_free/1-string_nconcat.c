#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string, where the src
 * string will be added.
 * @s2: source string
 * @n: number of bytes
 *
 * Return: if successful, return concatenated
 * string. if string equals null, returns an
 * empty string. if memory allocation fails,
 * return a NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *new_str;
	unsigned int s1_count;
	unsigned int s2_count;

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
	
	if (n >= s2_len)
	{
		n = s2_len;
	}
	
	new_str = malloc(s1_len + n + 1);
	
	if (new_str == NULL)
	{
		return (NULL);
	}
	
	for (s1_count = 0; s1_count < s1_len; s1_count++)
	{
		new_str[s1_count] = s1[s1_count];
	}
	
	for (s2_count = 0; s2_count < n; s2_count++)
	{
		new_str[s1_len + s2_count] = s2[s2_count];
	}
	
	new_str[s1_len + n] = '\0';
	
	return (new_str);
}
