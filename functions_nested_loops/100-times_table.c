#include "main.h"

/**
 * print_times_table - Print the n times table, starting from 0
 * @n: The times table to print
 */
void print_times_table(int n)
{
	int x, y, product, one, ten, hund;

	x = 0;
	if (n >= 0 && n <= 15)
	{
		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				product = x * y;
				one = product % 10;
				ten = product % 100 / 10;
				hund = product / 100;
				if (hund == 0 && y != 0)
				{
					_putchar(' ');
					if (ten == 0)
						_putchar(' ');
					else
						_putchar(ten + '0');
				}
				else if (hund != 0)
				{
					_putchar(hund + '0');
					_putchar(ten + '0');
				}
				_putchar(one + '0');
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
