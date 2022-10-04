#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string(to be concatenated)
 *
 * Return: Concatenated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = malloc((sizeof(char) * (strlen(s1) + strlen(s2))) + 1);

	if (c == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
		c[i + j] = s2[j];
	c[i + j] = '\0';

	return (c);
}
