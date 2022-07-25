#include <stdlib.h>
#include "main.h"

/**
 *wrdcnt - count the number of words in a string
 *@s: pointer to the string to be decortiqued
 *Return: number of words
 */
int wrdcnt(char *s)
{
	int i, w = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				w++;
		}
		else if (i == 0)
			w++;
	}
	w++;
	return (w);
}
/**
 *strtow - split a string into words token
 *@str: string to be split
 *Return: returns a pointer to an array of strings
 *or NULL if failure occurs during the splitage
 */

char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wrdcnt(str);
	if (words == 0)
		return (NULL);

	mat = malloc(sizeof(char *) * (words + 1));
	if (!mat)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = malloc(sizeof(char) * (c + 1));
				if (!tmp)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}

		}
		else if (c++ == 0)
			start = i;
	}

	mat[k] = NULL;

	return (mat);
}





