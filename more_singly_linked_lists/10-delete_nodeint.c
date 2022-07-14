#include "lists.h"

/**
 *delete_nodeint_at_index - delete the node at given index
 *@head: pointer to first node
 *@index: position of node to be freed//deleted
 *Return: 1 if success operation, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *actual = NULL;
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
	actual = tmp->next;
	tmp->next = actual->next;
	free(actual);
	return (1);
}




