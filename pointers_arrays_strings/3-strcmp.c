#include "main.h"

/**
 * _strcmp - function that compares two strings
 * using ascii values of characters
 * output the difference of  numeric ascii
 *@s1: one of the string
 *@s2: the other string
 *Return: either 0 for identic, the difference when there is
 *in ascii code difference
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0); /**
			      * strings identical
			      */
	}
	else
	{
		return (*s1 - *s2);
	}
}
