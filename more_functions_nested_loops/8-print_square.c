#include "main.h"

/**
 * print_square - display a square of size i = j
 * @i,@j: the height and width of square
 * size: gives the dimensions of square
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}



