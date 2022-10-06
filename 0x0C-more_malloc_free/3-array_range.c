#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Array of integers
 * @min: minimum number
 * @max: maxum number
 *
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int *t, i, j = 0;

	if (min > max)
		return (NULL);

	t = malloc(sizeof(int) * ((max - min) + 1));

	if (t == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		t[j] = i;
		j++;
	}
	return (t);
}
