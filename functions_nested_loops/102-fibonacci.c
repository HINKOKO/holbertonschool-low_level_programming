#include <stdio.h>

/**
 * fibonacci - displays fibonacci suite numbers
 * Return: exit success with 0
 */

int fibonacci(void)
{
	long int x = 1, y = 2, f;
	int i = 0;

	printf("%li, %li,", x, y);
	while (i < 48)
	{
		f = x + y;
		printf("%li, ", f);
		x = y;
		y = f;
		i++;
	}
	return (0);
}
