#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: values ordered from min
 * @max: values ordered from max
 * Return: return pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (!ptr)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}


