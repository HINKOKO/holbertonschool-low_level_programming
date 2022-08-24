#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: pointer to first element of array
 * @left: left or start of array or sub_array
 * @right: right or end of array or sub_array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array:");
	for (i = left; i < right; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}

/**
 * binary_rec - help function to make a recursive search
 * @array: pointer to first element of the array
 * @l: left or start of array or sub_array
 * @r: right or end of array or sub_array
 * @value: value to be found in array
 * Return: -1 if failure, or the sub array on so on
 */

int binary_rec(int *array, size_t l, size_t r, int value)
{
	int mid;

	if (l > r)
		return (-1);
	print_array(array, l, r);
	mid = (l + r) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_rec(array, l, mid - 1, value));
	return (binary_rec(array, mid + 1, r, value));
}

/**
 * binary_search - search for a value in a sorted array
 * using Binary search algorithm
 * @array: sorted array we're looking into our value
 * @size: number of elements in the array
 * @value: value to be found in array
 * Return: first index where value is located, or -1
 * if array is NULL or value not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
