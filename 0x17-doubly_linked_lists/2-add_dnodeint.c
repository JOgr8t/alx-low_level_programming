#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *y;
	dlistint_t *z;

	y = malloc(sizeof(dlistint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	new->prev = NULL;
	z = *head;

	if (z != NULL)
	{
		while (z->prev != NULL)
			z = z->prev;
	}

	y->next = z;

	if (z != NULL)
		z->prev = y;

	*head = y;

	return (y);
}
