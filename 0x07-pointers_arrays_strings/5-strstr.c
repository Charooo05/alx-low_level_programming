#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be searched
 * @needle: substringg to be searched for
 *
 * Return: pointer to beginning of located substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[j])
		{
			return (haystack + i);
		}
	}

	if (haystack[i] == '\0')
		return (0);
	return (haystack + i);
}
