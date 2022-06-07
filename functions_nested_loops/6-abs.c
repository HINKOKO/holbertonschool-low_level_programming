#include "main.h"

/**
 * _abs - gives the absolute value of an integer
 * @n: integer to test, positive or not
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}

