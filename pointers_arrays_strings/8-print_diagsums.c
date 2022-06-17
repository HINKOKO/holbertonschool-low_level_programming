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
	int i;
	unsigned int sumright, sumleft;

	sumright = 0;
	sumleft = 0;

	for (i = 0; i < size; i++)
	{
		sumright += a[(size * i) + i];
		sumleft += a[(size * (1 + i)) + (1 + i)];
	}
	printf("%d, %d", sumright, sumleft);
	printf("\n");
}

