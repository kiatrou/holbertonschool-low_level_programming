#include "main.h"
/**
 * reverse_array - swaps the
 * elements from both ends of the
 * array towards the middle
 * @a: pointer to the array of ints
 * @n: number of elements in array
 *
*/
void reverse_array(int *a, int n)
{
	int left = 0;
	/*Start from first element*/
	int right = n - 1;
	/*Start from last element*/
	int temp;

	/*Swap elements from both ends*/
	while (left < right)
	{
		/*swap a[left] with a[right]*/
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
