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
	int i, j;
	int len = 1;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	str = malloc(sizeof(char) * len);

	if (str == 0)
		return (NULL);

	str[0] = '\0';

	for (i = 1; i < ac; i++)
	{
		for (j = 1; j < av[i][j]; j++)
		strcat(str, av[i][j]);
	}

	printf("%s\n", str);

	free(str);

	return (str);
}


