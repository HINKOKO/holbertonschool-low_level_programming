#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * argstostr- function that concatenate all arguments
 * passed to the function.
 * Return: NULL if fails, return a pointer to  
 * the new string
 * @ac: number of arguments
 * @av: array of arguments
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len = 1;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < argv; i++)
	{
		len += strlen(argv[i]);
	}

	str = malloc(sizeof(char) * len);

	if (str == 0)
		return (NULL);

	str[0] = '\0';

	for (i = 1; i < argv; i++)
	{
		strcat(str, argv[i]);
	}

	printf("%s\n", str);

	free(str);
}


