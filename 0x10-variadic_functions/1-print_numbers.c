#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 *print_numbers - prints numbers
 *
 *@separator: separates input
 *
 *@n: number of input
 *
 */



void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(string, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(string);

putchar('\n');
}
