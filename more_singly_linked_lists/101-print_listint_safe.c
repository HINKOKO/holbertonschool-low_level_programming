#include "lists.h"
#include <stdio.h>

/**
 *print_listint_safe - prints linked list safe way
 *seems holberton's main test file is weird
 *to send us in the choux and orties and die of checker attack
 *@head: pointer to first node
 *Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
