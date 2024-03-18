#include "function_pointers.h"

/**
 * int_index - Search for an integer.
 * @array: Content to check.
 * @size: Length of array.
 * @cmp: Function pointer to comparison function.
 *
 * Return:
 * If array || size == NULL - -1.
 * If no match - -1.
 * Else - Index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

	return (-1);
}
