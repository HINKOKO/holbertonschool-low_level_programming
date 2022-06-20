#include "main.h"


int prime(int n, int k);

/**
 * is_prime_number - function to check if n is prime
 * @n: to number to check
 * Return: return recursively to int prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - function for calculate how many divisors n has
 * more than 2 not a prime baby
 * Return: return to same function, recursive tchak
 * @n: the number to check
 * @k: iteration divisor
 */

int prime(int n, int k)
{
	if (k == 1)
	{
		return (1);
	}
	else
	{
		if ((n % k) == 0)
		{
			return (0);
		}
		else
		{
			return (prime(n, k - 1));
		}
	}
}
