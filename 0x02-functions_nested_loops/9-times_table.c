#include "main.h"
/**
 * times_table - prints the times table from 1 to 9
 *
 *
 */

void times_table(void)
{
	int n;
	int b;

	for (n = 0; n <= 9; n++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 0)
			{
				_putchar(48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((n * b) <= 9)
			{
				_putchar(((n * b) % 10) + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(((n * b) / 10) + 48);
				_putchar(((n * b) % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
