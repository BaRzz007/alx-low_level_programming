#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional
 * grid previously created by alloc_grid function
 * @grid: pointer to the allocated memory to a 2 dimensional array
 * @height: number of rows of the array
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
