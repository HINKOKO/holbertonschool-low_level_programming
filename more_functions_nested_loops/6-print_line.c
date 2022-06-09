#include "main.h"

/**
 * print_line - print a line of lenght n = '_'
 * @n: integer to determine the lenght of line
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		_putchar('_');
	}
}



