#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: numbers of elements in array
 * @size: size of array
 *
 * Return: Pointer to array or NULL
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char  *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = malloc(size * nmemb);

	if (n == NULL)
		return (NULL);

	for (i = 0; i <= nmemb * size; i++)
		n[i] = 0;

	return (n);
}
