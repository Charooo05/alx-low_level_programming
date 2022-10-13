#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: expected number of inputs
 * Return: sum of inputted digits
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list parameters;


	va_start(parameters, n);

	if (n == 0)
		return (0);

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(parameters, int);
	}
	va_end(parameters);

	return (sum);
}
