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
	_putchar('0' + rem);

return (0);
}
