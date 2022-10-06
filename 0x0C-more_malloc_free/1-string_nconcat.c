#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string (to be concatenated)
 * @n: bytes of string 2 to be concatenated
 *
 * Return: pointer to the concatenated string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(((strlen(s1) + n) * sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; *s1; i++, *s1++)
		s[i] = *s1;
	if (n >= strlen(s2))
	{
		for (j = 0; *s2; j++, *s2++)
			s[i + j] = *s2;
	}
	else
	{
		for (j = 0; j < n; j++, *s2++)
			s[i + j] = *s2;
	}
	s[i + j] = '\0';

	return (s);
}
