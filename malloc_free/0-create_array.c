#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an array of chars,
 * initialize with a specific character
 *@size: size of the array to create
 *@c: the initialization character
 *Return: pointer to the array, or NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int j;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < size)
	{
		*(a + j) = c;
		j++;
	}

	*(a + j) = '\0';

	return (a);
}
