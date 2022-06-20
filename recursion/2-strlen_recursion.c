#include "main.h"
/**
 * _strlen_recursion - returns string lenght
 * using recursuion
 * @s: the string to calculus
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
