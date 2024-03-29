#include "hash_tables.h"
unsigned long int hash_djb2(const unsigned char *str);
/**
 * key_index - returns the index of a key
 * @key: key is the key!
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value should be stored
 * in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
