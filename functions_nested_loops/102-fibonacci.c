#include <stdio.h>

/**
 * fibonacci - displays fibonacci suite numbers
 * Return: exit success with 0
 */

int fibonacci(void)
{
	int i, j, k, next;

	j = 1;

	k = 1;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 5555555)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
