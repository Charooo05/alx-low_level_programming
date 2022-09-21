#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: main string
 * @src: string to be appended
 * @n: desired bytes
 *
 * Return: resulting string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
