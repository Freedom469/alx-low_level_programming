#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sums them all up
 *
 *@n: number of args
 *
 *Return: sum
 *
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;

	va_list sumtotal;

	va_start(sumtotal, n);


	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumtotal, int);
	}

	va_end(sumtotal);
		return (sum);
}
