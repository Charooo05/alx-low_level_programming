#include "main.h"
/**
 * _isalpha - prints alphabet character
 *
 * @c: character case
 *
 * Return: Either 0 or 1
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
