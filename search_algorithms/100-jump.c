#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to look into
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value found, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump = 0;
	size_t index;

	start = 0;
	jump = sqrt(size);
	end = jump;

	if (!array || size == 0)
		return (-1);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += jump;
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (index = start; index <= end && index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
