#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *printer;
	char status = 0; /*trick for skipping last comma*/

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		printer = ht->array[i];
		while (printer != NULL)
		{
			if (status == 1)
				printf(", ");
			printf("'%s': '%s'", printer->key, printer->value);
			status = 1;
			printer = printer->next;
		}
	}
	printf("}\n");
}
