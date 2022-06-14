#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * Return: returns a pointer to the resulting string
 * @src: the source string
 * @dest: destination string to write on
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}



