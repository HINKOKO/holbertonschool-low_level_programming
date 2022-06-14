#include "main.h"

/**
 * _strncpy - function that copies a string, limited bytes size with n
 * a bit same as strcpy(), but with this at least n bytes are copied,
 * avoid buffer overflow
 * @n: integer bytes limit
 * @src: the source string
 * @dest: the destination string
 * Return: return to pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
