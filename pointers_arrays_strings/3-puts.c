#include "main.h"

/**
 * _puts - prints the string,followed
 * by a newline
 * @str: our string character
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
