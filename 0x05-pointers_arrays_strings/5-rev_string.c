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

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		n = s[i];
		i--;
	}
	_putchar('\n');
}
