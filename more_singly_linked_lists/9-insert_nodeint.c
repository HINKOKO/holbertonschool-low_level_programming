#include "lists.h"

/**
 *insert_nodeint_at_index - insert node at specific index position
 *@head: pointer to first node
 *@idx: index position for insertion
 *@n: data to fill in the new node
 *Return: the adress of new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (n == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (--idx)
		tmp = tmp->next;

	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
