#include "main.h"

/**
 *set_bit - set a bit to 1 at a given index
 *@n: pointer to the number we want to modify
 *@index: position of the bit to change
 *Return: -1 for an error, 1 for successfull execution
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= (1UL << index);
	return (1);
}

