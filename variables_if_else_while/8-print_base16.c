#include <stdio.h>

/**
 * main - prints all number sof base 16,lowercase
 *Return: always 0 success
 *
 */

int main(void)
{
	int num = '0';
	int alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);

}
