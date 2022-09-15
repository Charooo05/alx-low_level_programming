#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: desired number of times straight line is drawn
 *
 */

void print_line(int n)
{
	int a;

	a = 1;
	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
