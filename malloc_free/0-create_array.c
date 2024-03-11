#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Of chars and init it with specific char.
 * @size: Size of memory to print.
 * @c: The specified char to print.
 *
 * Return:
 * If size equal 0 - NULL.
 * If array equal NULL - NULL.
 * Else - array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
