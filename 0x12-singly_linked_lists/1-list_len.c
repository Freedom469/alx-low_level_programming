#include "lists.h"


/**
 *list_len  - counts the elements of a singly linked list
 *
 *@h:  pointer argument
 *
 *Return: number of elements
 *
 */


size_t list_len(const list_t *h)
{

	size_t counter = 0;

	while (h != NULL)
	{

		h = h->next;

		counter++;
	}

	return (counter);
}
