#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at
 * a given index
 * @n: number
 * @index: given index
 *
 * Return: value of bit at given index, -1 if
 * fails
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int result = 0;

	/**
	 * the sizeof(n) returns the size of n
	 * bytes. By multiplying by 8, you get
	 * the number of bits in n.
	 * this ensures that index is valid
	 * Multiplying by 8 is 64 bits which is
	 * common for unsigned long int
	 * If index is larger than 0-63 then
	 * it will return -1
	 */
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	/*Shifts bits to the right*/
	result = n >> index;
	/*isolates least significant bit*/
	result = result & 1;
	/*which is the result*/
	return (result);
}
