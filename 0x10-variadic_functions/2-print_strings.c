#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 *print_strings - prints input strings
 *
 *@separator: separates strings
 *
 *@n: number of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);


	for (i = 0; i < n; i++)
	{
		char *str = va_arg(string, char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}



		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	putchar('\n');
}
