#include "main.h"

/**
 * _strlen - get the lenght of a string
 * rev_string - print string in reverse order
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
	s--;

	return (len);
}

void rev_string(char *s)
{
	int left, right;
	char temp;

	left = 0;
	right = (_strlen(s) - 1);
	
	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}

