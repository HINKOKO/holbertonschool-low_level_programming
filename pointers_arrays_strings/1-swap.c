#include "main.h"

/**
 * swap_int - switches the value of
 * two integers
 * @a: pointer to first value integer
 * @b: pointer to second value integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

