#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memmory for an arrar
 * @nmemb: arrays
 * @size: no of elements
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		exit(0);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
