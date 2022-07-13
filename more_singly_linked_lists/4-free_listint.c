#include "lists.h"

/**
 *free_listint - function that frees our listint list
 *@head: pointer to the starting point of list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
