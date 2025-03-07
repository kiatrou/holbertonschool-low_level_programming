#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers and
 * prints the result
 * @argc: integer number that has the numbers
 * being multiplied
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	/*Convert from char to int*/
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
