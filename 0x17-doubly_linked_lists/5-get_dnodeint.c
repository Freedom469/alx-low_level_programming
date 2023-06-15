#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: head of the linked list
 * @index: is the index of the node, starting from 0
 * Return: the nth node, NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (index == count)
		{

			return (temp);
		}

		temp = temp->next;
		count++;

	}

	return (NULL);

}
