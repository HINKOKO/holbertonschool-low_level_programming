#include "main.h"

/**
 * _pow_recursion - return the value of x raised to
 * power y , using recursion of course
 * Return: 1, -1 or the result if it's appropriate
 * @x: the integer to raise
 * @y: the power which raise x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
