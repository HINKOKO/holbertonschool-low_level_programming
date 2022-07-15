#include "lists.h"

/**
 *find_listint_loop - function that detect
 *a loop in a linked list
 *@head: pointer to the first node
 *Return: the adress where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *S = head;
	listint_t *F = head;

	while (S && F && F->next)
	{
		S = S->next;
		F = F->next->next;
		if (S == F)
		{
			S = head;
			while (S != F)
			{
				S = S->next;
				F = F->next;
			}
			return (F);
		}
	}
	return (NULL);
}
