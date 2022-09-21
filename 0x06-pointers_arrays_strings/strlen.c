#include "main.h"

/**
 * _strlen: returns the string length
 *
 * @s: string whose length is to be determined
 *
 * Return: string's length
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{}
	return (i);
}
