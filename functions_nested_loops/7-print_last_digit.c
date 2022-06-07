#include "main.h"

/**
 * print_last_digit - output the last digit of a number
 * @n: the integer of which we want the last digit
 * Return: return the last digit of integer
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < '0')
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

