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
	int rotA[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int rotB[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	int rotC[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int rotD[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == rotA[j] || rot	
