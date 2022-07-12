#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - add a new node at the end of list
 *@head: pointer to begin of list
 *@str: the string to add in new node
 *Return: adress of new elements, or NULL if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *tmp = *head;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	/**
	 * next = NULL
	 *because new node going to be the last
	 */
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	return (new);
}






