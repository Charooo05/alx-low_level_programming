#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
