#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function that compares two strings
 * and allows a wildcard char '*'
 * @s1: string compared
 * @s2: string to compare with s1
 * Return: 1 if it is identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}

	return (0);
}
