#include "lists.h"

/**
 *pop_listint - function that remove the head node of linked list
 *@head: double pointer to starting point of list
 *Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}

