#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest:  output file
 *
 * @src: input file
 *
 * Return: pointer dest
 *
 * @n: number of the source indexs to be appended
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i;

		l1 = strlen(dest);
		l2 = strlen(src);

	for (i = 0; i <= l2; i++)
	{
		while (i < n)
		{
			dest[l1 + i] = src[i];
			i++;
		}
	}

	return (dest);
}
