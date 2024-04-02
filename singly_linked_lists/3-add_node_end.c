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
	unsigned int len = 0;

	list_t *new_node, *temp;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);

	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	return (new_node);
}
