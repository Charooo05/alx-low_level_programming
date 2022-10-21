#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: head pointer to first node
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *pt;
	
	while (ptr != NULL)
	{
		pt = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = pt;
	}
	free(head);
}
