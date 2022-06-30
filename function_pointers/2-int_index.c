#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array we have to search in
 * @size: size of the array
 * @cmp: pointer to the function
 * which is looking to the integer
 * Return: returns i, i.e. the index of first element
 * for which to cmp function does not return 0, else
 * if no elements matches return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
				return (i);
		}
	}
	return (-1);
}
