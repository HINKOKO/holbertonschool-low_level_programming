#include "lists.h"

/**
 *free_listint_safe - frees a list in a safe way,
 *infinite zgertch avoided
 *@h: double pointer to first node
 *Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	long int diff;
	listint_t *tmp;

	if (h == NULL)
		return (1);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}


