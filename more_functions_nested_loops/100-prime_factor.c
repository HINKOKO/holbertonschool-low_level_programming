#include <stdio.h>

/**
 * main - finds and print largest prime divisor
 * @n,@div: number and divisor
 * return: 0 for success
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long div = 2;

	while (div < n)
	{
		if (n % div == 0)
		{
			n = n / div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", n);
	return (0);
}
