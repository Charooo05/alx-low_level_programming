#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: main string
 * @src: string to be appended
 *
 * Return: resulting string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; src[j]; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
