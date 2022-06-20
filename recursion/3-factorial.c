#include "main.h"

/**
 * factorial - function that returns the factorial
 * of an integer
 * @n: the integer to "factorify"
 * Return: 0 for success, or the value
 * of the factorial calculus
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
