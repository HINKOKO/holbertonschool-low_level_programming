#include <stdio.h>

/**
 * main - displays fibonacci suite numbers, even-evalued
 * Return: exit success with 0
 */

int main(void)
{
	long int x = 1, y = 2, fib, even;
	int i = 0;

	while (i < 4000000)
	{
		fib = x + y;
		y = x;
		x = fib;
		if ((fib % 2) == 0)
		{
			even += fib;
		}
		printf("%li", even);
		i++;
	}
	printf("\n");
	return (0);
}
