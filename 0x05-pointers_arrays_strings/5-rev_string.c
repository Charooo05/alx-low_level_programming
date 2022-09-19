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
	while (s[i])
	{
		n = s[i];
		_putchar(n);
		i++;
	}
	_putchar('\n');
}
