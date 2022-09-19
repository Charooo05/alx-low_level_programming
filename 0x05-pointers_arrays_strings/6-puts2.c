#include "main.h"
/**
 * puts2 - prints every other character of a string, from the first character
 *
 * @str:  string parameter
 *
 */

void puts2(char *str)
{
	int i;
	char n;

	for (i = 0; str[i]; i++)
	{
		n = str[i];
		if (i % 2 == 0)
			_putchar(n);
	}
	_putchar('\n');
}

