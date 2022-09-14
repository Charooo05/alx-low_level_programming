#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 *
 */

void jack_bauer(void)
{
	int t, n;

	for (t = 0; t <= 23; t++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar((t / 10) + 48);
			_putchar((t % 10) + 48);
			_putchar(':');
			_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
			_putchar('\n');
		}
	}
}
