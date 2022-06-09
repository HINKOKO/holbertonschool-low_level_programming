#include "main.h"

/**
 * print_diagonal - display a diagonal line on screen
 * diag: evaluate and reach n
 * @n: the number of times to display diag
 * escape: the number of space before '\' character
 */

void print_diagonal(int n)
{
	int diag;
	int escape;

	if (n > 0)
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (escape = 1; escape < diag; escape++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

