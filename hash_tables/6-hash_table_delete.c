#include "hash_tables.h"

/**
 * hash_table_delete - frees all spaces allocated for a hash table
 * @ht: the hash table to free
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *messiah;

	if (!ht || !ht->array || !ht->size)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			messiah = ht->array[i]->next;
			ht->array[i] = messiah;
		}
	}
	free(ht->array);
	free(ht);
}
