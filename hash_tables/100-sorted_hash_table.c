#include "hash_tables.h"

/**
 * shah_table_create - create a sorted hash table PHP elephant you my friend
 * @size: size of sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i;
	shash_table_t *stb = malloc(sizeof(shash_table_t));

	if (!stb)
		return (NULL);
	stb->size = size;
	stb->shead = NULL;
	stb->stail = NULL;
	stb->array = malloc(size * sizeof(shash_node_t *));
	if (!stb->array)
	{
		free(stb);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		stb->array[i] = NULL;

	return (stb);
}

/**
 * @brief
 *
 */
shash_node_t *make_new_snode(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = node->snext = node->sprev = NULL;
	return (node);
}
/**
 * @brief
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *newnode, *mover;
	char *new;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
}
