#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square array of integers
 * @a: square matrix from which we take diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum += a[i];
			}
			if ((i + j) == (size - 1))
			{
				sum1 += a[i];
			}
		}



		printf("%d, %d\n", sum, sum1);
	}
}
