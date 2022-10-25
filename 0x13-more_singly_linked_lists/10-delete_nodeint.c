#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer to the pointer to the first node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *h;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		h = *head;
		*head = h->next;
		free(h);
		return (1);
	}
	h = *head;
	while (i < index)
	{
		if (h == NULL)
			return (-1);

		if (i == index - 1)
		{
			ptr = h->next;
			h->next = ptr->next;
			free(ptr);
		}
		h = h->next;
		i++;
	}

	return (1);
}
