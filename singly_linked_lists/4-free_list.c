#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free a list.
 * @head: Pointer to the list.
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp->str);
		free(temp);
	}
}
