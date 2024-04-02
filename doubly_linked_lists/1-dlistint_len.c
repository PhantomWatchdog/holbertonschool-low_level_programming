#include "lists.h"

/**
 * dlistint_len - Count elements in linked list.
 * @h: The head of the list.
 * Return: The number of elements in dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
