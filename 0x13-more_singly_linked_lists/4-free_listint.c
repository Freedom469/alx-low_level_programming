#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the start of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	if (!head)
		return;
	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
