#include <stdio.h>
/**
 * main - entry point
 * @argc: unused - usually an integer numebr that stores
 * the number of command-line arguments passed by the user
 * including the program name
 * @argv: an array of character pointers listing all
 * arguments - in this case, the name of the program
 *
 * Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
