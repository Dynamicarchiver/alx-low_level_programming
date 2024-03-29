#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional array
 * @grid: pointer to the grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
