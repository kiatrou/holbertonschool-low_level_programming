#include "main.h"
/**
 * _strlen - function that counts the amount
 * of characters in a string
 * @s: pointer of where the string begins
 *
 * Return: count returns the length of the string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++; /*Increments the length for each character*/
		s++; /*This moves to the next character*/
	}
	return (count); /*This returns the length of the string*/
}
