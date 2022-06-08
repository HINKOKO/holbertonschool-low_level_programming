#include "main.h"

/**
 * _isdigit - check for a digit from 0 to 9
 * Return: 1 for a digit, 0 otherwise
 * @c: the character to check
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
