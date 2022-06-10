#include "main.h"

/**
 * print_number - print an integer whatever is
 * @n: integer switch
 *
 */

void print_number(int n)
{
	unsigned int m, d, lap;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	} else
	{
		m = n;
	}

	d = m;
	lap = 1;

	while (d > 9)
	{
		d /= 10;
		lap *= 10;
	}
	for (; lap >= 1; lap /= 10)
		_putchar(((m / lap) % 10) + 48);
}
