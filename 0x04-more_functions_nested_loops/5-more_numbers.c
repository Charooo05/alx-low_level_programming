#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int n, c;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
