#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: number
 * @i: iteration
 *
 * Return: Square root of number
 *
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - checks if n has a natural root
 *
 * @n: number
 *
 * Return: -1 or square root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
