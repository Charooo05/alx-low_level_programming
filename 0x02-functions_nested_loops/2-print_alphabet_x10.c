#include "main.h"
/**
 * print_alphabet - prints the alphabet ten times
 *
 * Return: (0);
 *
 */

void print_alphabet_x10(void)
{
	char d;
	int e;

	e = 1;
	while (e <= 10)
	{
		d = 'a';
			while (d <= 'z')
			{
				_putchar(d);
				d++;
			}

		_putchar('\n');
		e++;
	}
}
