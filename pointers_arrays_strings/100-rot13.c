#include "main.h"

/**
 * rot13 - function to encode in rot13
 * @c: the string/charac to convert
 * Return: return the converted string
 */

char *rot13(char *c)
{
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (c[i] == b[j])
				c[i] = a[j];
		}
	}
	return (c);
}
