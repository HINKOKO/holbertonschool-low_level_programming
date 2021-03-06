#include <stdio.h>

/**
 * main - displays fibonacci suite numbers, even-evalued
 * Return: exit success with 0
 */

int main(void)
{
	long int x = 1, y = 2, even = 2, fib;

	while (fib < 4000000)
	{
		fib = x + y;
		if ((fib % 2) == 0)
		{
			even += fib;
		}
		x = y;
		y = fib;
	}
	printf("%ld\n", even);
	return (0);
}
