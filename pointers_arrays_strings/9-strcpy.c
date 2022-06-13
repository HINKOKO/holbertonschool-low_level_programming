#include "main.h"

/**
 * _strcpy - function that copies string pointed by source src
 * into the pointed destination dest
 * @dest: the destination to write the string
 * @src: the source file from copying the string
 *Return: return to the beginning
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest; /*we assign a the base address of destination to start
			     *necessary for not loosing track of the adress
			     *of the beginning of the string
			     */

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* add null character at the end of destination file */
	return (start);
}
