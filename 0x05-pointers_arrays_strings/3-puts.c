#include "main.h"

/**
 *_puts - Prints a string followed by a new line
 *
 * @str:  String value
 *
 */

void _puts(char *str)
{

	int count = 0;

	while (count >= 0)
	{
		if (*(str + count) != '\0')
		{
			count++;
		}
		_puts("%s", str[count]);

	}

	_putchar('\n');
}
