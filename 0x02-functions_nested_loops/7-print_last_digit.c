#include "main.h"
#include "6-abs.c"
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

	last_digit = _abs(n % 10);
	_putchar(last_digit + 48);
	return (last_digit);
}
