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

	s--;

	return (len);
}

/**
  * puts_half - divide a string in half
  * @str: the string to split
  */

void puts_half(char *str)
{
	int i, mid, leng;

	leng = _strlen(str);

	if (leng % 2 != 0)
		mid = (leng - 1) / 2;
	else
		mid = leng / 2;

	for (i = mid; i < leng; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
