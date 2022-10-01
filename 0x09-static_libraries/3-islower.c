#include "main.h"
/**
 * _islower - prints lower case character
 *
 * @c: character to compare
 *
 * Return: Either 0 or 1
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
