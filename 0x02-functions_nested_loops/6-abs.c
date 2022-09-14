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
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
