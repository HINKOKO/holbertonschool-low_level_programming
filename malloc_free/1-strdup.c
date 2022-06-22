#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string s.
 * Memory for the new string is obtained with malloc
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	char *dupcpy;
	int sizestr;

	if (str == NULL)
		return (NULL);

	sizestr = strlen(str);
	dup = (char *)malloc(sizeof(char) * sizestr + 1);

	if (dup == NULL)
		return (NULL);

	dupcpy = dup;

	while (*str)
	{
		*dupcpy = *str;
		dupcpy++;
		str++;
	}

	*dupcpy = '\0';

	return (dup);
}



