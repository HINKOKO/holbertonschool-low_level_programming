#include "main.h"

/**
 *_strlen - return the lenght of a string recursively
 *@s: the string to 'lengify'
 *Return: 0 if no lenght otherwise the lenght baby
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * checkPalRec- check for palindrome recursively
 * @c: string to check
 * @left: left index position
 * @right: right index position
 * Return: 1 for palindrom, 0 for not one
 */

int checkPalRec(char *c, int left, int right)
{
	/**
	 * left = right means only one charac
	 */
	if (left >= right)
		return (1);
	else if (c[left] != c[right])
		return (0);
	else
		return (checkPalRec(c, left + 1, right - 1));
}

/**
 * is_palindrome - function checks if a given string
 * is a palindrom
 * @s: string to check
 * Return: 1 for yes, 0 for no
 */

int is_palindrome(char *s)
{
	int k = _strlen(s);

	if (k == 0)
		return (1);
	return (checkPalRec(s, 0, k - 1));
}

