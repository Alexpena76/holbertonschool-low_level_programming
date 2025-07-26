#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2 dimensional array of integers
 * @width: Width of the grid (number of columns)
 * @height: Height of the grid{ (number of rows)
 *
 * Return: Pointer to a 2d array initialized to 0
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);

		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
