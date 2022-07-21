#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index baby
 *@head: double pointer means double fun for starting point of dlistint
 *@index: position where we have to kill the node
 *Return: -1 for Error, 1 for success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!*head)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!current->next)
			return (-1);
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
