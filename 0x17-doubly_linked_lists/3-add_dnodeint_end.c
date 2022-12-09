#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head of the node
 * @n: node to be aaded
 * Return: address of element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/**declare the temp and new node*/
	dlistint_t *new;
	dlistint_t *temp;
/**creat the new node using malloc*/
	new = malloc(sizeof(dlistint_t));
/**checking if malloc failed and returns null*/
	if (!new)
	{
		return (NULL);

}
/**dublicating the head to our temp node*/
	temp = *head;
/**assigning null to the new next and prev address*/
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
/*
 *checking if the head is null and making
 *our new node the only node in the list
 */
	if (*head == NULL)
	{
		*head = new;
		return (new);

	}
/*
  *using  the temp node to help in the cheking of the last node
  *in the list. if our temp->next is equal to null
  *we insert the new node
  */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
