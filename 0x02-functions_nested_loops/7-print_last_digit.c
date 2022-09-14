#include "main.h"

/**
 *print_last_digit - prints the last digit of a number.
 *
 *@i: variable of type int
 *
 * Return: 0 always
 */

int print_last_digit(int i)
{
int rem;

	rem = i % 10;
	
	if (rem < 0)
	{
		_putchar(-rem + 48);
		return (-rem);
	}
	else
	{
		_putchar(rem + 48);
		return (rem);
	}

return (0);
}
