#include "main.h"
/**
 * leet - encodes a string into
 * 1337 (leetspeak)
 * @s: string being encoded
 *
 * Return: encoded string
*/
char *leet(char *s)
{
	int count = 0;

	/**
	 * First array stores the
	 * characters that need to
	 * be replaced.
	 * Second array stores the
	 * corresponding replacements.
	 */
	char being_replaced[] = "aAeEoOtTlL";
	char leetspeak[] = "4433007711";

	/*Loop through string*/
	while (s[count] != '\0')
	{
		/*Check char in char in replacements*/
		int arr_count = 0;

		/*Check if char needs replacement*/
		while (being_replaced[arr_count] != '\0')
		{
			if (s[count] == being_replaced[arr_count])
			{
				/*Replace with corresponding leet value*/
				s[count] = leetspeak[arr_count];
				break;
			}
			arr_count++;
		}
		count++;
	}
	return (s);
}
