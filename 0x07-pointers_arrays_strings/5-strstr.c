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
	int i, n;
	int j = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (needle[j] == '\0')
			return (haystack);
		
		else if (haystack[i] == needle[j])
		{
			for (j = 0, n = i; needle[j]; j++, n++)
			{
				if (needle[j] != haystack[n])
				{
					break;
					return (0);
				}
				else if (needle[j] == haystack[n])
					continue;
			}
			return (haystack + i);
		}
	}

	return (haystack + i);
}
