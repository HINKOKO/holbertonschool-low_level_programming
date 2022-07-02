#include "main.h"
#include <stdlib.h>

/**
 * _realloc - alloc a new memory area using
 * malloc and free
 * @ptr: pointer to previous  memory area reallocated
 * @old_size: old memory area allocated
 * @new_size: new memory area allocated
 * Return: a pointer to new memory area
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *oldptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	oldptr = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		ptr1[i] = oldptr[i];
	free(ptr);

	return (ptr1);
}
