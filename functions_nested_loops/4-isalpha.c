#include "main.h"

/**
 * _isalpha - check if character c is an alphabet character or not
 *@c: the character to check
 *Return: 1 for an alphabet and 0 otherwise
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

