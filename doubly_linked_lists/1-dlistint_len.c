#include "lists.h"

/**
 *dlistint_int - return number of elements in a linked list
 *@h: pointer to the double linked list
 *Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
