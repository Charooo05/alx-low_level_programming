#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - contains a copy of a given string
 *
 * @str: given string
 *
 * Return: a pointer to a newly allocated space in memory
 *
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	s = malloc((strlen(str) * sizeof(char)) + 1 );
	if (str == NULL)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
}
