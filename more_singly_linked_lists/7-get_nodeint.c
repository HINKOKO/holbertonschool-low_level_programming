#include "lists.h"

/**
 *get_nodeint_at_index - find the nth node of the list
 *@index: index of the node to be find
 *@head: pointer to starting point of list
 *Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ride_the_list;
	unsigned int i;

	if (!head)
		return (NULL);

	ride_the_list = head;

	for (i = 0; i < index; i++)
	{
		if (ride_the_list->next == NULL)
			return (NULL);
		ride_the_list = ride_the_list->next;
	}
	return (ride_the_list);
}

