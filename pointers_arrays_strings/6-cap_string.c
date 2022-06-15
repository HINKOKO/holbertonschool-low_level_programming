#include "main.h"

/**
 * cap_string - function that capitalize all words
 * @c: character to check , cap or not ?
 * Return: return c
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] -= 32;
			continue;
		}

		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n'
				|| c[i] == ',' || c[i] == ';'
				|| c[i] == '.' || c[i] == '!'
				|| c[i] == '?' || c[i] == '"'
				|| c[i] == '(' || c[i] == ')'
				|| c[i] == '{' || c[i] == '}')

		{
			++i;

			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] -= 32;
		}
		else
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
				c[i] += 32;
		}
	}
	return (c);
}
