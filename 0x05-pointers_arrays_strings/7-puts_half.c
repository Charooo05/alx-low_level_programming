#include "main.h"
#include "2-strlen.c"
/**
 * puts_half -  prints half of a string
 *
 * @str: string parameter
 *
 */

void puts_half(char *str)
{
	int i;
	char c;

	for (i = 0; str[i]; i++)
	{
		c = str[i];
		if (i > (_strlen(str) / 2))
		_putchar(c);
	}
	_putchar('\n');
}
