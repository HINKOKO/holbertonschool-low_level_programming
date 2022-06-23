#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - function concatenates two strings
 * using malloc option is cool because strcat doesn't care
 * how much size is available
 * @s1:string to be extended with s2
 * @s2: string to append to s1
 * Return: return a pointer to the newly allocated
 * space, which content s1 followed by s2, NULL if not enough space.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, j = 0, len1 = 0, len2 = 0, sizeneed;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;
	}

	sizeneed = (len1 + len2 + 1);

	s3 = (char *)malloc(sizeof(char) * (sizeneed));

	if (s3 == NULL)
		return (NULL);

	if (s1)
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}

	if (s2)
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}

	s3[i] = '\0';

	return (s3);
}

