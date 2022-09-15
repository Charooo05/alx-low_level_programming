#include <stdio.h>
#include "main.h"
#include "6-abs.c"
/**
 * print_to_98 - prints natural numbers to at most 98
 *
 * @n: a natural number
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		n = getchar();
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
			}
			n++;
		}
	}
	else
	{
		n = getchar();
		do {
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
			}
			n--;
		} while (n >= 98);
	}
	putchar('\n');
}
