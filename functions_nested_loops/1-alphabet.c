#include "main.h"

/**
 *print_alphabet - print alphabet in lowercase
 *Return: 0 for success
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
