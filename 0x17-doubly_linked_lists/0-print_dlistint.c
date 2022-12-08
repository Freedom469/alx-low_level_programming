#include "lists.h"

/**
 *print_dlistint - a function that prints
 *all the elements of a dlistint_t list.
 *
 *@dlistint_t: pointer
 *
 *@h: header
 *Return: data
 */


size_t print_dlistint(const dlistint_t *h)
{
        size_t  count = 0;

        if (h == NULL)
        {
                printf("empty")
        }
        else
        {
                while (h != NULL)
                {   
                        printf("%d\n", h->n);
                        h = h->next;
                        count++;
                }
        }
        return (count);

}
