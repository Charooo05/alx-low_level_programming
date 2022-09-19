#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer variable
 * @n: number of elements of the array
 *
 */

void print_array(int *a, int n)
{
	for (; a[n]; n++)
		printf("%d, ", a[n]);
}
