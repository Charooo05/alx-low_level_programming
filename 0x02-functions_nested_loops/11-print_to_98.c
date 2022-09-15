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
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
