#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freeing the 2D grid
 * from previous task
 * @grid: grid being freed
 * @height: number of rows
 *
 * Return: checks if grid isn't null
*/
void free_grid(int **grid, int height)
{
	int rows;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	/*Free each row*/
	for (rows = 0; rows < height; rows++)
	{
		free(grid[rows]);
	}

	/*Free the grid itself*/
	free(grid);
}
