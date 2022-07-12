#include "lists.h"
#include <stddef.h>

/**
 *list_len - function that compute
 *and return number of elements of a linked-list
 *@h: pointer to list
 *Return: nmbr of elements of list
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}


