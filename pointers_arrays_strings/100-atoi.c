#include "main.h"
/**
 * _atoi - a replication of the atoi
 * command that converts a string into
 * integers
 * @s: string being converted
 *
 * Description: Step 1:  while loop's
 * job is to make sure all non-numeric
 * characters are skipped. 9 and 13
 * refer to the ASCII table values.
 *
 * Step 2: First if statement handles the
 * signs in front of the integers (+ or -)
 *
 * Step 3: This while loop converts digits
 * into integers
 *
*/
int _atoi(char *s)
{
	int final_result = 0;
	/*This is the final integer result*/
	int sign = 1;
	/*Sign of result. 1 is positive, -1 is negative*/

	/*Step 1*/
	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}

	/*Step 2*/
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}

	/*Step 3*/
	while (*s >= '0' && *s <= '9')
	{
	
	}
}
