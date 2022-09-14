#include "main.h"
/**
 * _abs - computes value of an integer
 *
 * @c: integer value
 *
 * Return: always 0
 *
 */

int _abs(int c)
{
	if (c > 0)
	{
		_putchar(c);
	}
	else if (c == 0)
	{
		_putchar(c);
	}
	else
	{
		_putchar((c) * 45);
	}
	return (0);
}
