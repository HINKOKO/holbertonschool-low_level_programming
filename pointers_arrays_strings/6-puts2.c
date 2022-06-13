#include "main.h"

/**
 * _strlen - determine lenght of a string
 * len: the 'integer' for calculating string lenght
 * Return: return the lenght
 * @s: our string to calculate
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts2 - print every other character of a string
 * @str: the string we want to 'modify'
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

