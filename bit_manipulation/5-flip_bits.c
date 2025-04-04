#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: total count of different bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int swap = n ^ m;
	/*Exclusive or (XOR) the two numbers*/

	while (swap != 0)
	{
		count += swap & 1;
		/*If the least significant bit is 1, increment count*/
		swap = swap >> 1;
		/*Right shift to check the next bit*/
	}

	return (count);
	/*Return the total count of differing bits*/
}
