#include "lists.h"

/**
 * sum_dlistint - Sum the n data of a dlist.
 * @head: Pointer to head of a dlist.
 * Return: The data sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
