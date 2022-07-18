#include "main.h"

/**
 *flip_bits - function that calculates the number of bits
 *we need to flip for switching from n to m or vice-versa
 *@n: first number
 *@m: second number
 *Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int count = 0;

	p = n ^ m;

	while (p > 0)
	{
		count += p & 1;
		p >>= 1;
	}
	return (count);
}

