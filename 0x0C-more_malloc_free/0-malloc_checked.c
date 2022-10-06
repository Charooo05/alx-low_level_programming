#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of byte to be allocated
 *
 * Return: A pointer or void
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}
