#include "main.h"
/**
 * _strlen_recursion - a function that prints the length
 * of a string.
 * @s: pointer to a string
 *
 * Return: if string doesn't equal null, return the length
 * of the string. If not, return 0.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		/**
		 * 1 is counting the length, s + 1 moves
		 * along the string
		 */
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
