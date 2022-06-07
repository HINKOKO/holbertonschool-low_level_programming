#include "main.h"

/**
 * print_last_digit - output the last digit of a number
 * @n: the integer of which we want the last digit
 * Return: return the last digit of integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
