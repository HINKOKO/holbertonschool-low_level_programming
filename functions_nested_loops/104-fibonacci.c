#include <stdio.h>

/**
 * main - displays fibonacci suite numbers
 * Return: exit success with 0
 */

int main(void)
{
	unsigned long i, a, fib, a_head, a_tail, fib_head, fib_tail;

	a = 1;
	fib = 2;

	printf("%lu", a);

	for (i = 1; i < 91; i++) /* unsigned long can't store more we have to plit */
	{
		printf(", %lu", fib);
		fib = fib + a;
		a = fib - a;
	}

	a_head = a / 1000000000;
	a_tail = a % 1000000000;
	fib_head = fib / 1000000000;
	fib_tail = fib % 1000000000;

	for (i = 92; i < 100; ++i)
	{
		printf(", %lu", fib_head + (fib_tail / 1000000000));
		printf("%lu", fib_tail % 1000000000);
		fib_head = fib_head + a_head;
		a_head = fib_head - a_head;
		fib_tail = fib_tail + a_tail;
		a_tail = fib_tail - a_tail;
	}

	printf("\n");

	return (0);
}
