#include "main.h"
/**
 * leet - encodes a string into 1337(leet)
 *
 * @s: string to be encoded
 *
 * Return: Encoded string
 *
 */

char *leet(char *s)
{
	int i, b;
	int c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i]; i++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[i] == c[b])
			{
				s[i] = n[b];
				break;
			}
		}
	}
	return (s);
}
