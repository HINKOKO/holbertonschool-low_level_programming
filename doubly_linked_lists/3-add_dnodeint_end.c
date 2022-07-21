#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end
 *@head: double pointer to starting point of the doubly linked list
 *@n: data to fill in the new node
 *Return: adress of new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = (tmp)->next;
	}
	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;
	return (new);
}


