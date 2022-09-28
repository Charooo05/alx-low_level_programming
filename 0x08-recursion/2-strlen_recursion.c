#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string whose length is to be determined
 *
 * Return: Length of string
 *
 */

int _strlen_recursion(char *s)
{
	int i, len;

	i = 0;
	len = 1;

	if (s[i] == '\0')
		return (len);
	else
	{
		len++;
		i++;
	}

	return (len  + _strlen_recursion(s + i));
}
