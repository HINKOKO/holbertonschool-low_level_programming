#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *printer;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		printer = ht->array[i];
		while (printer != NULL)
		{
			printf("'%s': '%s', ", printer->key, printer->value);
			printer = printer->next;
		}
	}
	printf("}\n");
}
