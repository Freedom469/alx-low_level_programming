#include "main.h"
/**
 *_strncpy - copies a string
 *
 * @dest: destination file
 *
 * @src: source file
 *
 * @n: int variable
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		while (i < n)
		{
			dest[i] = src[i];

			i++;
		}
	}


	return (dest);
}
