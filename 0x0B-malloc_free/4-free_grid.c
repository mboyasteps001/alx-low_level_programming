#include "main.h"

/**
 * free_grid - Function that free the two dimension array
 * @grid:Two dimwnsions array input
 * @height:columns height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
