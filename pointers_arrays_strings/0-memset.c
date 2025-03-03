#include "main.h"
/**
 * _memset - fills memory with a
 * constant byte.
 * @s: pointer to the memory block
 * where the values will be set.
 * @b: the byte (a character) that
 * will fill the memory.
 * @n: the number of bytes in memory
 * you want to fill with the byte.
 *
 * Return: A pointer to the memory
 * block s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *original_start = s;
	/**
	 * This makes sure we can return
	 * to the original starting point,
	 * which is the start of the
	 * memory block.
	 */

	/**
	 * The while loop runs until the
	 * number of bytes of memory has
	 * been reached. Decrementing n
	 * makes sure the loop will run
	 * exactly n times.
	 *
	 * *s = b - store the value of
	 * b at the memory address
	 * pointed to by s.
	 *
	 * Incrementing s (++) moves the
	 * pointer to the next location.
	 */

	while (n != 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (original_start);
}
