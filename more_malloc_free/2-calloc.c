#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate ram et init each byte to '\0'.
 * @nmemb: Number of elements.
 * @size: Define the bytes size.
 * Return:
 * If alloc is NULL - NULL.
 * If nmemb or size is NULL - NULL.
 * Else - alloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	void *alloc;
	char *ptr;

	/* If one of them is NULL, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);

	if (alloc == NULL)
		return (NULL);

	/* pointer to start of alloc */
	ptr = alloc;

	/* Each byte is init to '\0' */
	for (index = 0; index < (size * nmemb); index++)
		ptr[index] = '\0';

	return (alloc);
}
