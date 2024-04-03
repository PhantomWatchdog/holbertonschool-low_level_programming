#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at specific position.
 * @h: Pointer to head of dlist.
 * @idx: List index where it should be added.
 * @n: The number to insert.
 * Return: New node address or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
