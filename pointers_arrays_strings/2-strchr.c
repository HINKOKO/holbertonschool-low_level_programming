#include "main.h"
#include <stddef.h>
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
