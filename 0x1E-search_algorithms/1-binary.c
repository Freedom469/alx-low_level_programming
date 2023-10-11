#include "search_algos.h"

/**
 * binary_search- function that performs binary search
 * @array: pointer to an array
 * @size: length of the array
 * @value: value we are searching for
 * Return: the index of the value or - 1 on failure
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t j = 0;
	size_t mid, x;
	size_t i = size - 1;

	if (array == NULL)
		return (-1);

	while (j <= i)
	{
		mid = j + (i - j) / 2;
		printf("Searching in array: ");
		for (x = j; x < i; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[i]);

		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			i = mid - 1;

		else if (value > array[mid])

			j = mid + 1;
	}
	return (-1);
}
