#include "lists.h"

/**
 * listint_len - function that computes nmbr of
 * elements in a linked list
 * @h: pointer to linked list
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
