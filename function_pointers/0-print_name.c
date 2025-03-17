#include "function_pointers.h"
/**
 * print_name - function that is called to
 * print a name
 * @name: name being printed
 * @f: pointer to a function
 *
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
