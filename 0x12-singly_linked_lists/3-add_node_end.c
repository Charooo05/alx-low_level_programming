#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head pointer to first node
 * @str: string to be added
 * Return: pointer to the node added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pt;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (strdup(str) == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	pt = *head;
	while (pt->next != NULL)
	{
		pt = pt->next;
	}

	pt->next = ptr;

	return (ptr);
}
