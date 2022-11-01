#include "main.h"



/**

 * print_binary - function that prints the binary representation of a number.

 * @n: number to be represented as binary

 */

void print_binary(unsigned long int n)

{

	if (n > 1)

	{

		print_binary(n >> 1);

		_putchar('0' + (n & 1));

	}

	if (n == 1)

		_putchar('0' + 1);

	if (n == 0)

		_putchar('0');

}
