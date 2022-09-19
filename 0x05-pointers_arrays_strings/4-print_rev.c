#include "main.h"

/**
 *print_rev - Write a function that prints a string, in reverse,
 *followed by a new line.
 *
 */
void print_rev(char *s)
{
	while ( *s != '\0')
	{
		*s++;
	}
	while (s--)
	{
		_putchar(*s);
	}
}
