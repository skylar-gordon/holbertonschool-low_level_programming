#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a node to the beginning of the linked list.
 * @head: Pointer to beginning of linked list.
 * @str: Data to put in the new node.
 * Return: Pointer to beginning of linked list upon success, NULL upon failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *data = strdup(str);
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = data;
	new_node->len = strlen(data);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
