#include "main.h"
/**
 * _atoi - a replication of the atoi
 * command that converts a string into
 * integers
 * @s: string being converted
 *
 * Return: final value with correct
 * sign
*/
int _atoi(char *s)
{
	int loop = 0;
	/*Tracks loop to find integers*/
	unsigned int final_result = 0;
	/*This is the final integer result*/
	int sign = 1;
	/*Sign of result. 1 is positive, -1 is negative*/
	int non_digit = 0;

	/*Runs the loop to check the string*/
	while (s[loop] != '\0')
	{
		if (s[loop] == '-')
		/**
		 * This searches the string for
		 * negative numbers
		 */
		{
			sign = sign * -1;
		}
		else if (s[loop] >= '0' && s[loop] <= '9')
		/*searches for characters between 0 and 9*/
		{
			non_digit = 1;
			/*if the first number found is true*/
			final_result = final_result * 10 + (s[loop] - '0');
			/*this converts character to integer*/
		}
		else if (non_digit) /*if non number is found*/
		{
			non_digit = 2;
			/*if non number found, this stops*/

			if (non_digit == 2)
			{
				return (final_result * sign);
			}
		}
		loop++;
	}
	return (final_result * sign);
}
