#include "main.h"
/**
 * _isupper - checks to see if c is uppercase
 * @c: character to be checked
 *
 * Return: 1 if character is lowercase, 0 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
