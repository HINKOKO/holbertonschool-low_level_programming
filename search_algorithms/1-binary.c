#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
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
	size_t left, mid, right;

	if (array != NULL && size > 0)
	{
		left = 0;
		right = size - 1;
		print_array(array + left, right + 1 - left);
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (array[mid] < value)
				left = mid + 1;
			else if (array[mid] > value)
				right = mid - 1;
			else
				return (mid);
			print_array(array + left, right + 1 - left);
		}
	}
	return (-1);
}
