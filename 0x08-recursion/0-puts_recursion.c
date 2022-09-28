#include "main.h"
#include<string.h>

/**
 *_puts_recursion - prints a string followed by a new line
 *
 *@s: string
 *
 *Return: nothing
 */

void _puts_recursion(char *s)
{


	int i, len = strlen(s);

	for (i = 0; i < len && s[i] != '\n'; i++)
	{
		_putchar(s[i]);

	}
	_putchar('\n');


}

