#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - selects the correction
 * function to perform the operation
 * asked by the user.
 * @s: operator being passed
 *
 * Return: pointer to corresponding
 * function
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/*.op loops through the string of chars*/
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
