#include <stdio.h>

/**
 * main - print lowercase alpabet | rev
 *
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

