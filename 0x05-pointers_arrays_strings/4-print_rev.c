#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: string parameter
 *
 */

void print_rev(char *s)
{
	char n;
	int i;

	i = _strlen(s) - 1;
	while (s[i])
	{
		n = s[i];
		_putchar(n);
		i--;
	}
	_putchar('\n');
}
