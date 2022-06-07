#include "main.h"

/**
 * print_last_digit - output the last digit of a number
 * @n: the integer of which we want the last digit
 * Return: return the last digit of integer
 */

int print_last_digit(int n)
{
	int p;

	l = n % 10;
	if (p < 0)
	{
		_putchar(-p + 48);
		return (-p);
	}
	else
	{
		_putchar(p + 48);
		return (p);
	}
}

