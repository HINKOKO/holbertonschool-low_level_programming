#include "lists.h"

/**
 *print_dlistint - prints all elements of a double linked list
 *@h: pointer to the double linked list
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
