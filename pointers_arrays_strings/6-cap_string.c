#include "main.h"

/**
 * cap_string - function that capitalize all words
 * @c: character to check , cap or not ?
 * Return: return c
 */

char *cap_string(char *c)
{
	int i = 0;

	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] -= 32;

	i++;

	while (c[i] != '\n')
	{
		if ((c[i] >= 'a' && c[i] <= 'z')
				&& (c[i - 1] == ' ' || c[i - 1] == '\t' || c[i] == '\n'
					|| c[i - 1] == ',' || c[i - 1] == ';'
					|| c[i - 1] == '.' || c[i - 1] == '!'
					|| c[i - 1] == '?' || c[i - 1] == '"'
					|| c[i - 1] == '(' || c[i - 1] == ')'
					|| c[i - 1] == '{' || c[i - 1] == '}'))
			c[i] -= 32;
		i++;
	}
	return(c);
}
