#include "search_algos.h"

/**
 * linear_search_jump - helper function, to search for a value
 * in an array after having used jumping search
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: value to be found in array
 * @start: start of sub_array after jumping
 * @end: end of sub_array after jumping
 * Return: first index where value is located in array
 * or -1 if failure
 */

int linear_search_jump(int *array, size_t size, int value,
					   size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

/**
 * jump_search - search for value in array using jump search algo
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search forbrief
 * Return: first index where value is located, -1 if failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t pos, jump;

	if (!array || !size)
		return (-1);

	pos = 0;
	jump = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	while (array[jump] <= value && jump < size)
	{
		pos = jump;
		jump += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", pos, jump);
	return (linear_search_jump(array, size, value, pos, jump));
}
