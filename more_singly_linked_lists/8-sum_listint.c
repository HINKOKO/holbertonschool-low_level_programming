#include "lists.h"

/**
 *sum_listint - sum all the data(n) of a list
 *@head: pointer to starting point of list
 *Return: the sum of all elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
