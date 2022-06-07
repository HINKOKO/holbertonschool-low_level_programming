#include "main.h"

/**
 * _islower - checks if the c is a lowercase
 *@c: - character type to test on
 *Return: 1 for an lowercase character, 0 otherwise
 */

int _islower(int c)
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

