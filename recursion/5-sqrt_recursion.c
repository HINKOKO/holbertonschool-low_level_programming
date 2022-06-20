#include "main.h"

int realsqrt(int n, int a);

/**
 * _sqrt_recursion - return the natural square root
 * if it exists hahaha
 * Return: return -1 if n doesn't have a natural
 * square root
 * @n: integer which we have to calculate square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (realsqrt(n, 0));
}

/**
  * realsqrt - calculate square root with recursive tech
  * Return: return the square root if existing
  * -1 if not
  * @n: integer to square-rootify
  * @a: integer for testing if square root exists
  */

int realsqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (realsqrt(n, a + 1));
}
