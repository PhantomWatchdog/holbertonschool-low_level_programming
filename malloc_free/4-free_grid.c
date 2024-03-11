#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free memory for grid array.
 * @grid: Array.
 * @height: Numbers of lines of array.
 */

void free_grid(int **grid, int height)
{
	int index;

	/* free each line of grid array (inside) */
	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	/* free the ram allocated to grid array (outside) */
	free(grid);
}
