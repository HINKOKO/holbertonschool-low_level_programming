#include "main.h"

/**
 * print_number - print an integer whatever
 * his value or sign
 * @n: the integer to print
 *
 */

void print_number(int n)
{
	unsigned int nbis;

	if (n < 0)
	{
		_putchar(45);
		nbis = -n;
	} else
		nbis = n;
	if (nbis / 10)
	{
		print_number(nbis / 10);
	}

	_putchar((nbis % 10) + 48);
}
