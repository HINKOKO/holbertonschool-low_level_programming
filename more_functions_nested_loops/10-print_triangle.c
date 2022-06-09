#include "main.h"

/**
 * print_triangle - print a triangle, upper-right to left-down
 * @a,@b: the size of triangle
 * @size: pretty the same
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
				_putchar(' ');
			for (c = 1; c <= a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
