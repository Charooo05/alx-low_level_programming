#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number
 *
 * Return: last digit of (n)
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);
	_putchar(last_digit + 48);
	return (n % 10);
}
