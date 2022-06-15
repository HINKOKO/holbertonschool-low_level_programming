#include "main.h"

/**
 *leet - function that convert with leet1337 system
 *Return: return the converted string
 *@s: the string to convert
 *
 */

char *leet(char *s)
{
	int alpha[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
				s[i] = num[j];
		}
	}
	return (s);
}
