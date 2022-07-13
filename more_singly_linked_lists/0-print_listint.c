#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to the list
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
