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
	int i, b;
	int s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; a[i]; i++)
	{
		if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
			a[i] = a[i] - 32;

		if (a[i] >= 'A' && a[i] <= 'z')
		{
			continue;
		}
		else
		{
			for (b = 0; s[b] != '\0'; b++)
			{
				if (a[i] == s[b])
					if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
						a[i + 1] = a[i + 1] - 32;
			}
		}
	}
	return (a);
}
