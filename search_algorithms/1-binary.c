#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
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
 * @brief
 *
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
 * @brief
 *
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
