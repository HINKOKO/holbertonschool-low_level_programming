#include "lists.h"

/**
 * add_nodeint - function that add new node at the head of list
 * @head: double pointer to starting point of list
 * @n:new data to add
 * Return: the adress of new element, or NULL if failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

