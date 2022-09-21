#include "main.h"
#include "strlen.c"

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
	int n;

	n = _strlen(s1) - _strlen(s2);
	return (n);
}
