#include "main.h"

/**
 * print_number - print an integer whatever his value
 * @n:the integer to test
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar(45);
		n1 = -n;
	} else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + 48);
}
