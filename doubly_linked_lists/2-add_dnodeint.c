#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning
 *@head: double pointer to starting point of list
 *@n: data to insert in the new node
 *Return: adress of new node, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}


