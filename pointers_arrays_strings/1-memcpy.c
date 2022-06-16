#include "main.h"

/**
 * _memcpy - copies n bytes from memory
 * area "src" to memory are "dest"
 * @dest: the dest memory area
 * @src: the memory source area
 * @n: the n bytes to be copied
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = (char *)dest;
	char *s = (char *)src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

