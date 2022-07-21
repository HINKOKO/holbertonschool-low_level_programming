#include "lists.h"

/**
 *get_dnodeint_at_index - get the node at index!
 *@head: pointer to starting point of list
 *@index: position of the node to be returned
 *Return: the node found at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *rider;
	unsigned int i;

	if (!head)
		return (NULL);

	rider = head;
	for (i = 0; i < index; i++)
	{
		if (rider->next == NULL)
			return (NULL);
		rider = rider->next;
	}
	return (rider);
}
