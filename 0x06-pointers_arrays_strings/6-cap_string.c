#include "main.h"
/**
 * cap_string -  capitalizes all words of a string
 *
 * @a: string whose words are to be capitalized
 *
 * Return: String with capitalized words
 *
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'z')
		{
			continue;
		}
		else if (a[i] < 48 || a[i] > 122)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] = a[i + 1] - 32;
		}
	}
	return (a);
}
