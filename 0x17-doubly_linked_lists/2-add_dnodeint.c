#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: head of the node
 * @n: node to be aaded
 * Return: address of element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	/**creating new node*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/**assigning new prev and next to null*/
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	/**if head is null insert node at the start*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/**new next will point to head*/
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
