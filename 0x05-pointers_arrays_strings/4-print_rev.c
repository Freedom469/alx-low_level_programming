#include "main.h"

/**
 *print_rev - Write a function that prints a string, in reverse,
 *followed by a new line.
 *@s: variable pointer
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
