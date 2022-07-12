#include "lists.h"

/**
 * free_list - function that frees the list_t list
 * @head: pointer to begining of list
 * Return: Nothing for void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
