#include "lists.h"
/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  *@head: pointer to the list
  *@index: the node index to return
  *Return:  the nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
