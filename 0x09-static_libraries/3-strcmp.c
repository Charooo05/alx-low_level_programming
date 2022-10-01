#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared with
 *
 * Return: Difference between the strings length
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;
	for (i = 0; s1[i] && s2[i]; i++)
	{
		n = s1[i] - s2[i];

		if (n != 0)
			break;

		else if (n == 0 && (s1[i] != '\0' && s2[i] != '\0'))
			continue;
	}
	return (n);
}
