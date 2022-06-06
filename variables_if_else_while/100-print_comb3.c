#include <stdio.h>

/**
 * main - prints all possible combinatuions of single-digit
 *Return: return 0 success
 *
 */

int main(void)
{

	int doubles;
	int single;

	for (doubles = '0'; doubles <= '9'; doubles++)
	{
		for (single = '0'; single <= '9'; single++)
		{
			if (!(single == '9') && (doubles == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
