#include "lists.h"

/**
 *free_dlistint - frees our dlistint_t list
 *@head: pointer to starting point of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
