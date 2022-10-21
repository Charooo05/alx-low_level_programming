#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: head pointer to first node
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
