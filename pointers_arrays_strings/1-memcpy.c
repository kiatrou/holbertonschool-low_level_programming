#include "main.h"
/**
 * _memcpy - copies a specified number of
 * bytes from one memory area to another.
 * @dest: destination string where the
 * characters are copied to.
 * @src: source string from where the
 * characters are copied from.
 * @n: the number of bytes in memory you
 * want to fill with byte.
 *
 * Return: returns destination string.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	/*Will help with returning to dest*/

	/**
	 * The while loop ensures the loop will
	 * run n times. The n-- checks n first and then
	 * decrements after each iteration. This
	 * ensures that the function copies exactly
	 * n bytes from src to dest.
	 *
	 * *dest = *src
	 * Dereference pointers, allowing the access
	 * to data at the memory location they point
	 * to. It copies the byte from src to dest.
	 */
	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original_dest);
}
