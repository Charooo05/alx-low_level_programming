#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the first node
 * Return: the head node’s data (n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int t;
	listint_t *h;

	if (*head == NULL)
		return (0);

	h = *head;
	t = h->n;
	free(*head);
	*head = h->next;
	free(h);

	return (t);
}
