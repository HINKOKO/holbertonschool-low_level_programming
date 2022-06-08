#include <stdio.h>

/**
 * main - displays fibonacci suite numbers
 * Return: exit success with 0
 */

int main(void)
{
	long int x = 1, y = 2, f;
	int i = 0;

	printf("%li, %li", x, y);
	while (i < 48)
	{
		f = x + y;
		printf(", %li", f);
		x = y;
		y = f;
		i++;
	}
	printf("\n");
	return (0);
}
