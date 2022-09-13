#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int b;

	for (b = 97; b <= 122; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
