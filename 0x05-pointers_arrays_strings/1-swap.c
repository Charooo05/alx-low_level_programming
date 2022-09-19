#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer value
 * @b: second integer value
 *
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
