#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - prints a string, in reverse
 *
 * @s: string parameter
 *
 */

void rev_string(char *s)
{
	char n;
	int i;

	i = 0;
	while (i < _strlen(s) / 2)
	{
		n = s[_strlen(s) - i - 1];
		i++;
	}
	_putchar('\n');
}
