#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to the pointer to the first node
 * @idx: position the node is to be inserted
 * @n: data in new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *h;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	h = *head;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	h = *head;
	if (idx <= count + 1)
	{
		while (i <= idx)
		{
			if (i == idx - 1)
			{
				ptr->next = h->next;
				h->next = ptr;
			}
			h = h->next;
			i++;
		}
	}
	else
		return (NULL);

	return (ptr);
}
