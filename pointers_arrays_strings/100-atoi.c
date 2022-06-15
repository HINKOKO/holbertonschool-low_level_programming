#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: return the result with good sign
 */

int _atoi(char *s)
{
	/**
	 *initialize result
	 *initialize sign as positive
	 */
	unsigned int res = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			res = (res * 10) + (*s - '0');
		else if (res > 0)
			break;
	} while (*s++);

	return (res * sign);
}
