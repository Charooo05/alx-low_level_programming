#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers to at most 98
 *
 * @n: a natural number
 *
 */

void print_to_98(int n)
{
	n = getchar();
		while (n <= 98)
		{
			if (n == 98)
			{
				putchar('n' + 48);
			}
			else if (n <= 9)
			{
				putchar((n % 10) + 48);
				putchar(',');
				putchar(' ');
				n++;
			}
			else
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(',');
				putchar(' ');
				n++;
			}
		}
	while (n >= 98)
	{
		if (n == 98)
		{
			putchar('n' + 48);
		}
		else
		putchar((n / 10) + 48);
		putchar((n % 10) + 48);
		putchar(',');
		putchar(' ');
		n--;
	}
}
