#include "function_pointers.h"

/**
 * array_iterator - Cast a function (action) to exe on array.
 * @array: Array of integers.
 * @size: Length of array.
 * @action: Function's pointer to an execution function.
 * Return.
 * If action || array == NULL - NULL.
 * While size > 0 - array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}

	/* Print size first and -- until 1 */
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
