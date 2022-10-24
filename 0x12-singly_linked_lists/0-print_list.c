#include "lists.h"


/**
 *print_list  - print contents of a singly linked list
 *
 *
 *@h: pointer argument
 *
 *Return: number of nodes
 */


size_t print_list(const list_t *h)
{

	size_t counter = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil");
		}
		else

		printf("[%d] %s", h->len, h->str);

		puts(" ");

		h = h->next;

		counter++;
	}
	return (counter);
}
