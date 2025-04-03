#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string being looped through
 *
 * Return: unsigned int of binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	/*Counts through b*/
	unsigned int result = 0;
	/*Updated result when converting to binary*/

	if (b == NULL)
	{
		return (0);
	}

	while (b[count] != '\0')
	{
		/*Checks if current character is 0 or 1*/
		if (b[count] == '0' || b[count] == '1')
		{
			result = (result << 1) + (b[count] - '0');
			/**
			 * this updates result by adding the current
			 * bit (after shifting the previous bits).
			 * It builds the binary number from left to
			 * right, one bit at a time
			 */
		}
		else
		{
			return (0);
		}
		count++;
	}
	return (result);
}
