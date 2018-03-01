#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints a singly linked list
 * @h: Where we are in the list.
 * Return: Number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
