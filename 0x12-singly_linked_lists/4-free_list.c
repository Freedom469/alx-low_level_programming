#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to list to be freed
 */
void free_list(list_t *head)
{
	list_t *new;

	new = head;
	while (head)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
	free(head);
}
Footer

