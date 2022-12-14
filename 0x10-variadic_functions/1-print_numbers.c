#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	i = 1;
	while (i < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(parameters, int));
		else
			printf("%d%s", va_arg(parameters, int), separator);
		i++;
	}
	printf("%d", va_arg(parameters, int));

	va_end(parameters);
	printf("\n");
}
