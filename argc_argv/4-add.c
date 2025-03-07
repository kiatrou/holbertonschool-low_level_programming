#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive
 * numbers
 * @argc: an integer number that stores the number
 * of command-line arguments passed by the user
 * including the program name.
 * @argv: an array of character pointers listing all
 * arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int result = 0;
	int count_out;
	int count_in;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/*Loop through all arguments*/
	for (count_out = 1; count_out < argc; count_out++)
	{
		/*Check if arg is valid number (digits only)*/
		for (count_in = 0; argv[count_out][count_in] != '\0';
		count_in++)
		{
			if (!isdigit(argv[count_out][count_in]))
			{
				/*Non digit*/
				printf("Error\n");
				return (1);
			}
		}

		/*Convert argument into int and add result*/
		result += atoi(argv[count_out]);
	}

	printf("%d\n", result);
	return (0);
}
