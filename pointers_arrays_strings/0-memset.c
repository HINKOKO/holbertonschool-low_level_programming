#include "main.h"

/**
 * _memset - function that copies tht value of b, into
 * each of the first n character of the object pointed
 * by si, perform copy operation byte by byte
 * Return: return a pointer to the memory area s
 * @n: the n bytes to fill with b
 * @b: constant byte to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}

