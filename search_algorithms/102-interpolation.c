#include "search_algos.h"

/**
 * interpolation_search - improved variant of binary search.
 * works on the probing position of the required value.
 * For working properly, the data should be sorted and
 * equally distributed form
 * @array: pointer to first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located, -1 if failure
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	size_t pos;

	if (array && size > 0)
	{
		while (array[h] != array[l])
		{
			pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
			if (pos < l || pos > h)
			{
				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				l = pos + 1;
			else if (value < array[pos])
				h = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
