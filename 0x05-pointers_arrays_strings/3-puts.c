#include "main.h"
#include <stdio.h>

/**
 *_puts - Prints a string followed by a new line
 *
 * @str:  String value
 *
 */

void _puts(char *str)
{

	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
		_putchar(str[count]);

	_putchar('\n');
}
