#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 *  listint_t linked list
 * @head: pointer to pointer to head of linked list
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 1;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = node->next;
		free(node);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (index == i)
		{
			node = temp->next;
			temp->next = node->next;
			free(node);
			return (1);

		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
