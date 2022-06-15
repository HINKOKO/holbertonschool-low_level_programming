#include "main.h"

/**
 * atoi - converts a string to an integer
 *
 * Return: return the result with good sign
 */

int _atoi(char *s)
{
	/**
	  *initialize result
	  *initialize sign as positive
	  *initialize index of first digit 
	  */
	int res = 0;
	int sign = 1;
	int i = 0;

	/**
	  * if number is negative
	  *we have to keep the sign
	  */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	/**
	  *iterate through all char/digit
	  */
	for (; s[i] != '\0'; i++)
		res = res * 10 +s[i] - 48;

	return (sign * res);
}

