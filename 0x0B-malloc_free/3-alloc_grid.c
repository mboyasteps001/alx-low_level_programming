#include "main.h"

/**
 * alloc_grid - Function that returns 2D array to located memory
 * @width:The width of the array(columns)
 * @height:Heiht of array(rows)
 * Return: The 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
