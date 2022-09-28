#include "main.h"
/**
 * check - checks for prime number
 *
 * @n: Number
 * @i: iterator
 *
 * Return: 1 if it is a prime number & 0 if otherwise
 *
 */

int check(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check(n, i + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: Number
 *
 * Return: Either 0 or 1(if prime)
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
