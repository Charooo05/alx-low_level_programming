#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: desired size of triangle
 *
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
				_putchar(' ');
			for (c = 0; c < a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
