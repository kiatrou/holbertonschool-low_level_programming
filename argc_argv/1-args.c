#include <stdio.h>
/**
 * main - prints the number of arguments
 * passed to it
 * @argc: integer number that stores the number
 * of command-line arguments passed by the user
 * @argv: unused
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
