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

#include "main.h"

/**
 * _strncat - recommended instead of strcat, it's safer because
 * strcat will copy whatever size, might cause buffer overflow
 * while strncat check size and will copy only n bytes
 * @n: number of bytes to copy
 * Return: pointer to dest stringi
 * @dest: dest string
 * @src: source string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (dest);
}
