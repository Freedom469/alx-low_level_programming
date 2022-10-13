#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - counter
 *
 *@array: array
 *
 *@size: size of the array
 *
 *@action: pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
