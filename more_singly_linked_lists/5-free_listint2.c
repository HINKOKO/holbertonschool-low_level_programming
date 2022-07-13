#include "lists.h"

/**
 *free_listint2 - function that frees our listint list
 *@head: double pointer to the starting point of list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
