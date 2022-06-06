#include <stdio.h>

/**
 * main - prints all combination of three digit
 * Return: Always 0 (success)
 */

int main(void)
{
	int hund;
	int tens;
	int unit;

	for (hund = 0; hund <= 9; hund++)
	{
		for (tens = hund + 1; tens <= 9; tens++)
		{
			for (unit = tens + 1; unit <= 9; unit++)
			{
				putchar(hund + '0');
				putchar(tens + '0');
				putchar(unit + '0');

				if (hund < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}


