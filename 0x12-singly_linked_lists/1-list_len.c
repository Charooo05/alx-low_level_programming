#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head (pointer to the first node)
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
