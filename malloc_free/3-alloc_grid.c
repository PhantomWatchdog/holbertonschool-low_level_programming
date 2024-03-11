#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Return to a 2 dimensional array of int.
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

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		grid[index] = malloc(width * sizeof(int));

		if (grid[index] == NULL)
		{
			for (jndex = 0; jndex < index; jndex++)
			{
				free(grid[jndex]);
			}

			free(grid);
			return (NULL);
		}

		for (jndex = 0; jndex < width; jndex++)
		{
			grid[index][jndex] = 0;
		}
	}

	return (grid);
}
