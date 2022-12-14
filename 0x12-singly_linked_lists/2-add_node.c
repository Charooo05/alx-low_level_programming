#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer to the first node
 * @str: new data to be added
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	void *h;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	h = *head;
	ptr->next = h;
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	*head = ptr;

	return (ptr);
}
