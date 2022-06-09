#include "main.h"

/**
 * print_numbers - print 0 to 9 with ascii code
 * ch: character 
 *
 */

void print_numbers(void)
{
	char ch = 48;

	while (ch < 58)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
