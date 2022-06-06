#include <stdio.h>

/**
 * main - display alphabet in lowercase
 * Return: returns 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
