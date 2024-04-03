#include "lists.h"

/**
 * get_dnodeint_at_index - Return a choosen node from a dlist.
 * @head: Pointer to the list.
 * @index: Node index used for move in list.
 * Return: Return the choosen node or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		count++;
		current = current->next;
	}

	return (NULL);
}
