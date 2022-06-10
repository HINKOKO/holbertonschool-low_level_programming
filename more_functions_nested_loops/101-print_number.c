#include "main.h"

/**
 * print_number - print an integer whatever n is
 * @n, @n1: integer procedure
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_putchar(n / 10);
	}
	_putchar((n % 10) + '0');
}
