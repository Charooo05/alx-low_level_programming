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
	n = s1[i] - s2[i];
	return (n);
}
