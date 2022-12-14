#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h != NULL) /* tranversing with the head */
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
