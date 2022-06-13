#include "main.h"

/**
 * _strlen - determine lenght of a string
 * len: the 'integer' for calculating string lenght
 * Return: return the lenght
 * @s: our string to calculate
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


