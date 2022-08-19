#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 * Return: returns a pointer to the newly created hash table
 *  or NULL if something goes wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_table_t *));
	if (!table->array)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	free(table->array);
	free(table);
	return (table);
}
