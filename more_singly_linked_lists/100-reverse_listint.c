#include "lists.h"

/**
 *reverse_listint - reverse a linked list,iteratively
 *@head: pointer to first node
 *Return: adress of the new first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}
	*head = prev;
	return (*head);
}

