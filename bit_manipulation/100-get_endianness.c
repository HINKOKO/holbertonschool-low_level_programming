#include "main.h"

/**
 *get_endianness - function tells us if the machine
 *is little endian or big endian
 *Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return (*c);
}
