#include "main.h"
/**
 * rev_string - takes a string and reverses it
 * @s: string being reversed
 *
*/
void rev_string(char *s)
{
	char *start = s; /*Start of the string*/
	char *end = s; /*End of the string*/

	while (*end != '\0') /*Traverses the string from start to finish*/
	{
		end++;
	}

	end--; /*Goes back a space so end doesn't start on NULL*/

	while (start < end)
	/**
	 * This loop runs as long as start is less than end and stops
	when the two points meet in the middle
	*/
	{
		char temp = *start; /*Creates a temporary space for the start variable*/
		*start = *end;
		*end = temp;

		start++; /*Starts counting forward from the start of the string*/
		end--;
		/*Starts counting from the end of the string and moves towards the start*/
	}
	_putchar('\n');
}
