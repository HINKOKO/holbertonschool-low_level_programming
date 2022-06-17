#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - calculates sum of two diagonals
 * of a square aray integer
 * @a : the array pointed to
 * @size: the size of the array
 *
 */

void print_diagsums(int *a, int size)
{
	int i, temp1, temp2;
	int left = 0;
	int right = 0;

	for (i = 0; i < size; i++)
	{
		temp1 = (size * i) + i;
		right += *(a + temp1);
		temp2 = (size * i) + (size - 1 - i);
		left += *(a + temp2);
	}
	printf("%d, %d\n", right, left);
}

