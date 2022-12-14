#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of char & initializes it with a specific char
 *
 * @size: size of array
 * @c: character
 *
 * Return: a pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
