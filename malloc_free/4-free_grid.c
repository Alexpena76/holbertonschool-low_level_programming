#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array of integers
 * @grid: The 2D array to be freed
 * @height: Height of the grid (number of rows)
 *
 * Return: Nothing (void)
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
