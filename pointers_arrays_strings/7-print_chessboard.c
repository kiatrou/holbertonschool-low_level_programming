#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * where each row of pieces or empty spaces
 * are displayed on a new line
 * @a: a pointer to a 2D array that has [8]
 * rows and [8] columns.
*/
void print_chessboard(char (*a)[8])
{
	int row = 0;
	/*Row counter*/
	int column = 0;
	/*Column counter*/

	/*Loop through each row - there are 8*/
	while (row < 8)
	{
		/**
		 * Loop through each column in current row
		 * (8 columns per row)
		 */

		column = 0;
		/*reset column to avoid errors*/

		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
}
