#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index
 * @head: head of the linked list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_node;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index)
	{
		prev_node = temp;
		count++;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev_node->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = prev_node;
	}
	free(temp);
	return (1);
}
