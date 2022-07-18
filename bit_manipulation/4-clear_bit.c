#include "main.h"

/**
 *clear_bit - function that clears a bit a given position
 *@n: the number we want to modify
 *@index: position of the bit to be cleared
 *Return: -1 if an error occurs, 1 for success exit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
