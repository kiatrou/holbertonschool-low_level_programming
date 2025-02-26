#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int hundred = 1;

	while (hundred <= 100)
	{
		if ((hundred % 3) == 0 && (hundred % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((hundred % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((hundred % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", hundred);
		}
		if (hundred < 100)
		{
			printf(" ");
		}
		hundred++;
	}
	putchar('\n');
	return (0);
}
