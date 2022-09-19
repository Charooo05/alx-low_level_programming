#include "main.h"
/**
 * _puts -  prints a string
 *
 * @str: inputted string
 *
 */

void _puts(char *str)
{
	int i;
	char n;

	for (i = 0; str[i]; i++)
	{
		n = str[i];
		_putchar(n);
	}
	_putchar('\n');
}
