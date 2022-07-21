#include "lists.h"

/**
 *sum_dlistint - sum all the data in the list
 *@head: pointer to starting point of list
 *Return: sum, the sum of all the data in list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


