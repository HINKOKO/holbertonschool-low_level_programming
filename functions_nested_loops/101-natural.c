#include <stdio.h>

/**
 * main - calculates all natural numbers below 1024,3 and 5 multiples
 * Return: always 0 for success
 */

int main(void)
{
	int sum3 = 0, sum5 = 0, sum = 0;
	int i;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 += i;
		}
		else if ((i % 5) == 0)
		{
			sum5 += i;
		}
	}
		sum = sum3 + sum5;
		printf("%d\n", sum);
		return (0);
}



