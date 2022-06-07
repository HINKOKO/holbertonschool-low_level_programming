#include "main.h"

/**
 * _abs - gives the absolute value of an integer
 * @n: integer to test, positive or not
 * Return:always 0 for success
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}

