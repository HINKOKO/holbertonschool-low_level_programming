#include "main.h"

/**
 *binary_to_uint - converts a binary contained in a string
 *@b: pointer to a string of 0 and 1 chars
 *Return: the converted value, or 0 for b=NULL or
 *if there is one or more chars in b that are not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}
