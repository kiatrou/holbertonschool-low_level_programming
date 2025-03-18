#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - headahce
 * @argc: number of command-line arguments
 * passed by user
 * @argv: array of character pointers listing
 * all arguments
 *
 * Return: Always 0 (Success)
 *
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*operator)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (operator == op_div || operator == op_mod))
	{
		printf("Error\n");
		exit(100);
	}

	result = operator(num1, num2);

	printf("%d\n", result);
	return (0);
}
