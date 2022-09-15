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
	int a;

	if (n < 98)
	{
		a = n;
		while (a <= 98)
		{
			printf("%d", a);
			if (a != 98)
			{
				putchar(',');
			}
			a++;
		}
	}
	else
	{
		do {
			printf("%d", a);
			if (a != 98)
			{
				putchar(',');
			}
			a--;
		} while (a >= 98);
	}
	putchar('\n');
}
