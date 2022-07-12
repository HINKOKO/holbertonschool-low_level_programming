#include "lists.h"
#include <stdio.h>

/**
 *print_list - print all elements of a single linked-list
 *@h: pointer to the list > list_t
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u], %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}

