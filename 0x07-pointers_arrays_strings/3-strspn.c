#include "main.h"
#include "2-strchr.c"
#include <stddef.h>
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: string to be scanned for
 *
 * Return: length of substring
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);

	while (s[i] && _strchr(accept, s[i]))
	{
		len++;
		i++;
	}
	return (len);
}
