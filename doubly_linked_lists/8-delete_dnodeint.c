#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index baby
 *@head: double pointer means double fun for starting point of dlistint
 *@index: position where we have to kill the node
 *Return: -1 for Error, 1 for success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *current = NULL;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp && i < index - 1; i++)
	{
		if (!tmp || !tmp->next)
			return (-1);
		tmp = tmp->next;
	}
	current = tmp->next;
	tmp->next = current->next;
	current->next->prev = tmp;
	free(current);
	return (1);
}
