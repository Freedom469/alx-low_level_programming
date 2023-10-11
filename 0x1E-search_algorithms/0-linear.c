#include "search_algos.h"

/**
 * linear_search - function that performs linear search
 * @array: pointer to an array
 * @size: size of the array
 * @value: value we are searching for
 * Return: 0 on success or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
