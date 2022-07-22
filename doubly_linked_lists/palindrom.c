#include <stdio.h>

int reverse(unsigned int n);

/**
 *main - calculates largest palindrom made of
 *product of three digits numbers
 *Return: 0 for success
 */
int main(void)
{
	int i, j, a;
	int lastBest = 1;
	int best_i = 1;
	int best_j = 1;
	const int max =	999;

	for (i = max; i > 0; --i)
	{
		for (j = i; j > 0; --j)
		{
			int a = i * j;
			if (lastBest > a)
				break;
			else if (a == reverse(a))
			{
				lastBest = a;
			}
		}
	}
	printf("%d\n", lastBest);
	return (0);
}

/**
 *reverse - function for reverse a number and check with the original one
 *in order to know if it's a palindrome
 *Return: the reversed number
 */
			
int reverse(unsigned int n)
{
	unsigned int reversed = 0;
	while (n)
	{
		reversed = 10 * reversed;
		reversed = reversed + (n % 10);
		n /= 10;
	} 
	return (reversed);
}
