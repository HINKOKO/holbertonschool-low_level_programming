#include "main.h"

/**
 * wildcmp - compares two string with recursion
 * it's wild !!
 * @s1: source string to comp
 * @s2 other string to comp to source s1
 * Return: -2 for stopping process
 */

int wildcmp(char *s1, char *s2)
{
    /**
      *if one of the pointer is a NULL pointer return directly -2
      * in order to stop the process
      */
    if(s1 == NULL || s2 == NULL)
            return (-2);
 
    if(strcmp(s1, s2) == 0) /**
			      *the two strings are identical
			      */
        return (0);
 
    if ((s1[0]) == (s2[0]) && (s1[0]) == ((s2 + 1)[0]))
        wildcmp(s1, ++s2);
    else if ((s1[0]) == (s2[0]) && (s2[0]) == ((s1 + 1)[0]))
        wildcmp(++s1, s2);
    else if((s[0])==(s1[0]))
        CompareStrings(++s, ++s1);
    else
        return (-1);
}

/**
 * _strcmp - function that compares two strings
 * using ascii values of characters
 * output the difference of  numeric ascii
 *@s1: one of the string
 *@s2: the other string
 *Return: either 0 for identic, the difference when there is
 *in ascii code difference
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0); /**
			      * strings identical
			      */
	}
	else
	{
		return (*s1 - *s2);
	}
}
