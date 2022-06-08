#include <stdio.h>

/**
 * main - displays fibonacci suite numbers
 * Return: exit success with 0
 */

int main(void)
{
	unsigned long x = 1, y = 2, f;
	int i = 0;

	printf("%lu, %lu", x, y);
	while (i < 93) /* unsigned int limit storage */
	{
		f = x + y;
		printf(", %lu", f);
		x = y;
		y = f;
		i++;
	}
	printf("\n");
	return (0);
}
