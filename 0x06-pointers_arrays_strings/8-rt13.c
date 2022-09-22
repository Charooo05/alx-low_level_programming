#include "main.h"
/**
 * rot13 -  encodes a string using rot13
 *
 * @s: string to be encoded
 *
 * Return: encoded string
 *
 */

char *rot13(char *s)
{
	int i, j;
	char rotA[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char rotB[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
	
	for (i = 0; s[i]; i++)
	{
		for (j = 0; rotA[j]; j++)
		{
			if (s[i] == rotA[j])
			{
				s[i] = rotB[j];
			}
			if (s[i] == rotB[j])
			{
				s[i] = rotA[j];
			}
		}
	}
	return (s);
}
