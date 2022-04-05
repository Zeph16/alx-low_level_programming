#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a malloced 2d array
 * @grid: the 2d array
 * @height: height of the 2d array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
