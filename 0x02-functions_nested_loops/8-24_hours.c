#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 *
 */

void jack_bauer(void)
{
	int a, b, c, d, t, n;

	a = (t / 10);
	b = (t % 10);
	c = (n / 10);
	d = (n % 10);

	for (t = 0; t <= 23; t++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(a + 48);
			_putchar(b + 48);
			_putchar(':');
			_putchar(c + 48);
			_putchar(d + 48);
			_putchar('\n');
		}
	}
}
