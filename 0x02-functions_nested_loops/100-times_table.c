#include "main.h"
/**
 * print_times_table - prints the times table from 1 to 9
 *
 * @n: any number
 *
 */

void print_times_table(int n)
{
	int b;

	for (n = n; n <= n; n++)
	{
		for (b = 0; b <= n; b++)
		{
			if (n > 15)
				break;
			else if (b == 0)
			{
				_putchar(48);
			}
			else if ((n * b) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((n * b) % 10) + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((n * b) / 10) + 48);
				_putchar(((n * b) % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
