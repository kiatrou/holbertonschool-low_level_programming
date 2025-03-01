#include <stdio.h>
#include "main.h"
/**
 * main - capitilises all words
 * of a string
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-word 0123456hello world\\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
