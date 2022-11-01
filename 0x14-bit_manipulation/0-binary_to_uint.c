#include "main.h"
#include <string.h>
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
*
* Return: the converted number, or 0 or NULL
*/
unsigned int binary_to_uint(const char *b)
{

	unsigned int total = 0;
	int len, decval;

	if (!b)/*check if string is empty*/

		return (0);

	for (len = 0; b[len] != '\0'; len++)
	;
	for (len--, decval = 1; len >= 0; len--, decval *= 2)
	{
		if (b[len] != '0' && b[len] != '1')/*if the value at i is not 1 or 0*/
		{

			return (0);
		}

		if (b[len] & 1)/*the value at len is 1*/
		{

			total += decval;
		}
	}

	return (total);
}
