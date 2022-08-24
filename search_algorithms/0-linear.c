#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * using a Linear Search Algorithm
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: value to be found in array
 * Return: first index where value is located in array
 * or -1 if failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
