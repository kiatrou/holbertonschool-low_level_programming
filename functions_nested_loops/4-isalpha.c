#include "main.h"
/**
 * _isalpha - checks if there are alphabetic characters present
 * @c: character being checked
 *
 * Return: 1 if character is a letter (upper and lower included), 0 if not.
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
