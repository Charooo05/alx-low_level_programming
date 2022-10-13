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

	for (i = 1; i <= n; i++)
	{
		s = va_arg(parameters, char *);
		if (s == NULL && separator != NULL)
			printf("(nil)");
		else if (i == n && separator != NULL)
			printf("%s", s);
		else if (separator != NULL)
			printf("%s%s", s, separator);
	}

	va_end(parameters);
	printf("\n");
}
