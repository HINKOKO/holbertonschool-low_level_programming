#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strspn - strspn returns the length
 * of the inital segment of str s which
 * consists only of character that are part of
 * string accept
 * @s: initial string
 * @accept: the character to check the match
 * Return: return the lenght of segment(nmbr of bytes)
 * _strchr - locates charac in a string
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}

