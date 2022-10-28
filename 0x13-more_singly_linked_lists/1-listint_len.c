#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked
 * listint_t list
 * @h: the value in the list
 *
 * Return: the number of elements in a linked listint_t list or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (0);
	}
	else
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}

	return (i);
}
