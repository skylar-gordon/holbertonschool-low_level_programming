#include "lists.h"
#include "strlen.c"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node to end of linked list.
 * @head: Pointer to first node in the linked list.
 * @str: Data to go in the new node.
 * Return: Pointer to first node upon success, NULL upon failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *data = strdup(str);
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = data;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(data);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (*head);
}
