#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the integer to check
 * Return: 0 for zero, 1 for positive and -1 for negative number
 *
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
