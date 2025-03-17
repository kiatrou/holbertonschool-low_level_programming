#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: pointer to array
 * @size: how many elements in array
 * @action: function being used as parameter
 *
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;
	/*Unsigned int, avoids negative values*/

	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
