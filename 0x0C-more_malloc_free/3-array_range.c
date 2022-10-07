#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: beginning of array
 * @max: end of array
 *
 * Return: Pointer to the array or NULL
 *
 */

int *array_range(int min, int max)
{
	int *n;
	int i;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(int) * ((max - min) + 1));

	if (n == NULL)
		return (NULL);

	for (i = 0; i <= max; i++, min++)
		n[i] = min;

	return (n);
}
