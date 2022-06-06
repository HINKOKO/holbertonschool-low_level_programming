#include <stdio.h>

/**
 * main - prints all possible combinatuions of single-digit
 *Return: return 0 success
 *
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
		putchar('\n');

		return (0);
	}
