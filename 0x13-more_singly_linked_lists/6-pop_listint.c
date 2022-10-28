#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the head of list
 *
 * Return:the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);
	temp = *head;
	n = (*head)->n;
	if (temp->next)
		*head = temp->next;
	else
		*head = NULL;
	free(temp);
	return (n);
}
