#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers.
 * @min: Minimal value for array.
 * @max: Maximal value for array.
 * Return:
 * If min > max - NULL.
 * If malloc fail - NULL.
 * Else - array.
 */

int *array_range(int min, int max)
{
	int index, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	/* Define the number of elements in array */
	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	/* Assign value to each elements from min to max */
	for (index = 0; index < size; index++)
	{
		array[index] = min;
		min++;
	}

	return (array);
}
