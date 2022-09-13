#include "main.h"
/**
 *_putchar - first entry point
 *
 *
 *
 *
 * Return: always 0
 */
int _putchar(char c)
{	
	int i;
	c[8] = "_putchar";
	for (i = 0; i < 7; i++;)
	{
		_putchar(c[i]);
	}	
_putchar('\n');
return (0);
}
