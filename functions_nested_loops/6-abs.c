#include "main.h"
/**
 * _abs - print the absolute vaulue of an integer
 * @n: integer being checked
 *
 * Return: If int is lower than zero it returns the int in a negative,
 * else it returns the int
 *
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
