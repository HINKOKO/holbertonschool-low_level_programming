#include "main.h"

/**
 *string_toupper - read string and convert all lower to uppercase
 *@c: character checker
 *Return: return the string after conversion
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] < 123 && c[i] > 96)
			c[i] = c[i] - 32;
		else
			c[i] = c[i];
	}
	return (c);
}


