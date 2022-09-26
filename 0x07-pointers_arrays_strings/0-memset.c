#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *
 *@s: string
 *
 *@b: char to be filled to memory
 *
 *@n: number of bytes to be filled
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}


	return (s);
}
