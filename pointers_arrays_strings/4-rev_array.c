#include "main.h"

/**
 *reverse_array - function that reverse THE ORDER of array,
 *we don't print them in reverse order,
 *we reverse the elments in place, ok ?
 *@a: pointer on array
 *@n: number of array elements
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}


