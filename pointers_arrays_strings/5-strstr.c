#include "main.h"
#include <string.h>

/**
 *_strstr - find the 1st occurence of substring
 * "needle" in string "haystack"
 * @haystack: main string to check,if there is the substring
 * inside or not
 * @needle: the substring to find in mainstring
 * Return: return a pointer to the beginning of the
 * located substring, or NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		/**
		 * if first character match,
		 *check for the whole string along
		 */

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		/**
		 *if complete substring match, return starting adress
		 */
		if (!*pattern)
			return (begin);

		haystack = begin + 1;
	}
	return (NULL);
}
