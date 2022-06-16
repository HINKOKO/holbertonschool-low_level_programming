#include "main.h"
#include <string.h>

/**
 * _strpbrk - locates first occurence in string
 * s of any o fthe bytes in string accept
 * @s: string to check
 * @accept: pattern byte to check in @s
 *Return: either a pointer to the byte in s matching
 * one of the bytes in accept
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}

/**
 * _strchr - locates a charac in a string
 * Return: return a pointer to the first
 * occurence of c
 * @c: character to find
 * @s: the string to roll along
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
