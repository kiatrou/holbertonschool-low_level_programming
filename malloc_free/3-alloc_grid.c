#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D
 * array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: returns null on failure, on success
 * returns pointer to 2D array.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int rows;
	int columns;

	/*Check for invalid width or height*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Alocate memory for rows*/
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	/*Allocate memory for each row (columns)*/
	for (rows = 0; rows < height; rows++)
	{
		/*allocate columns for each row*/
		grid[rows] = malloc(width * sizeof(int));
		if (grid[rows] == NULL)
		{
			/*if fail, free prev alloc mem return NULL*/
			for (columns = 0; columns < rows; columns++)
			{
				free(grid[rows]);
			}
			free(grid);
			return (NULL);
		}
	}
	/*Initialise elements to 0*/
	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
		{
			grid[rows][columns] = 0;
		}
	}
	return (grid);
}
