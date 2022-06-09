#include "main.h"

/**
 * print_square - display a square of size i = j
 * @i,@j: the height and width of square
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
		}
	}
	else
		_putchar('\n');
}



