#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a poiter to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *h;
	
	h = *head;
	while (h != NULL)
	{
		ptr = h->next;
		free(h);
		h = ptr;
	}
	free(head);
}
