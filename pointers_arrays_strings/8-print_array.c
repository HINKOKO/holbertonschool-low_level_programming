#include "main.h"
#include <stdio.h>

/**
 * print_array - function that print n elements of an array
 *@a: pointer to the array
 *@n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
