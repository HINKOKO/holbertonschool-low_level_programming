#include "main.h"

/**
 *get_bit - get the bit status/value at a given index of
 *an unsigned long int
 *@n: u long int to get the bit value at index
 *@index: index position of the bit
 *Return: the bit value at index or -1 if index asked is wrong
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_status;

	if (index > 31)
		return (-1);

	bit_status = (n >> index) & 1;

	return (bit_status);
}


