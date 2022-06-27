#include <string.h>
#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - function that allocates memory
 * for an array, using malloc.
 * @nmemb: number of elements of the array
 * @size: size in bytes of each elements
 * Return: NULL if function fails
 * otherwise a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *callmem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	callmem = malloc(sizeof(int) * nmemb * size);

	if (callmem == NULL)
		return (NULL);

	_memset(callmem, 0, nmemb * size);

	return (callmem);
}

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}

