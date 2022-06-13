#include "main.h"

/**
 *
 *
 *
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

void rev_string(char *s)
{
	int left, right;
	char temp;

	left = 0;
	right = _strlen(s) - 1;
	
	while (left < right)
	{
		temp = s[right];
		s[right] = s[left];
		s[left] = temp;
		_putchar(*s);
		right--;
	}
	_putchar('\n');
}

