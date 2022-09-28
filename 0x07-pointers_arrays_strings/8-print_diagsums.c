#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integers
 *
 * @a: square matrix
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagonal_1 = a[0];
	int diagonal_2 = a[size];

	for (i = 0; i < size; i++)
	{
		diagonal_1 += a[(i * size) + i];
		diagonal_2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagonal_1, diagonal_2);
}
