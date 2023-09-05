#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memeory allocated for a 2D grid
 * @grid: Pointer to the 2D grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
