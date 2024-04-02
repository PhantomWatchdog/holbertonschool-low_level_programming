#include "lists.h"
#include <stdio.h>

/**
 * list_len - Print the length of the list.
 * @h: The list.
 * Return:
 * The number of elements linked in list_t.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current;

	for (current = h; current != NULL; current = current->next)
	{
		len++;
	}

	return (len);
}

