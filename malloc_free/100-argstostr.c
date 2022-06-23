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
	int len = 0;
	int k = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * len);

	if (str == 0)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	return (str);
}
