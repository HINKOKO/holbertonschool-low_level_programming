#include <stdio.h>

/**
 * main - print lowercase alpabet | rev
 * Return: always 0 for success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);

}

