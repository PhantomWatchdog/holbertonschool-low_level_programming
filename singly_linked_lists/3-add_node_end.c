#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - Add new node at the beginning of a list.
 * @head: Pointer to the list.
 * @str: String to add in the node.
 * Return: Address of the new element.
 * If fail - NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
