#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the linked list.
 * @head: Pointer to first item on the list.
 * Return: Void
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free(head);
		free_list(head->next);
	}
}
