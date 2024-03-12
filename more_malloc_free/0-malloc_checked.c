#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Memory allocation.
 * @b: Will define the size of malloc.
 * Return:
 * If malloc failed and alloc == NULL - 98.
 * Else - alloc.
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}

	return (alloc);
}
