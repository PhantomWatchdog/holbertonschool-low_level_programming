#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all elements of list_t.
 * @h: The list.
 * Return:
 * The count of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current;

	/* Move foward in list until head != NULL */
	for (current = h; current != NULL; current = current->next)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}

		node_count++;
	}
	return (node_count);
}
