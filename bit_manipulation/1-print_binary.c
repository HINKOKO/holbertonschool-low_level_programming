#include "main.h"

/**
 *print_binary - print the binary representation of an
 *unsigned long int.Without using % or /,using bitwise tecnics
 *@n: the long unsigned int to convert
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
