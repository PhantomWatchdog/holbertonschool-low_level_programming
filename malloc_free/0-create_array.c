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

	/* If 0, no elements to stock */
	if (size == 0)
	{
		return (NULL);
	}

	/* alloc ram for a defined number elements to stock in array */
	array = malloc(size * sizeof(char));

	/* check if alloc ram is succesful */
	if (array == NULL)
	{
		return (NULL);
	}

	/* assign c to each index */
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
