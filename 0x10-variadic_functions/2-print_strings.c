#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the string
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list parameters;


	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(parameters, char *);
		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	va_end(parameters);
	printf("\n");
}
