#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string being printed
 *
 * Description: The function puts the string into
 * an array (called count) and uses that to count
 * every other character. Then it prints each of
 * those characters using putchar.
*/
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if(count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
