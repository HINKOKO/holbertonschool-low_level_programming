#include "main.h"

/**
 * print_line - print a line of lenght line = '_'
 * line: integer to determine the lenght of line
 *
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
