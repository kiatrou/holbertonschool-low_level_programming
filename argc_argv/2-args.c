#include <stdio.h>
/**
 * main - print all arguments received
 * @argc: number of command-line arguments
 * @argv: array of chars
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
