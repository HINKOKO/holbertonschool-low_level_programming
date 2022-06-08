#include "main.h"

/**
 * _isupper - check for uppercase character
 * Return: 1 for an uppercase, 0 otherwise
 * @c: the character to check 
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
