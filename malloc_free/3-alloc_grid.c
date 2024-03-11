#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Return to a 2 dimensional array of int.
 * grid: The address of the two dimensional grid.
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index, jndex;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Alloc ram for height pointers in first array */
	grid = malloc(height * sizeof(int *));

	/* If alloc failed return NULL */
	if (grid == NULL)
	{
		return (NULL);
	}

	/* move until last char of height */
	for (index = 0; index < height; index++)
	{
		/* Alloc ram for width pointers in second array */
		grid[index] = malloc(width * sizeof(int));

		/* If alloc failed free ram until last char of index */
		if (grid[index] == NULL)
		{
			for (jndex = 0; jndex < index; jndex++)
			{
				free(grid[jndex]);
			}

			/* Free ram for grid himself */
			free(grid);
			return (NULL);
		}

		/* Init each elements of grid to 0 */
		for (jndex = 0; jndex < width; jndex++)
		{
			grid[index][jndex] = 0;
		}
	}

	return (grid);
}
/**
 * 9/10
 * Probably Betty.
 * How reduce code ? (max 40 lines).
 */
