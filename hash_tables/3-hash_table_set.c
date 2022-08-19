#include "hash_tables.h"

/**
 * @brief
 *
 */

hash_node_t *make_new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - add element to an hash table
 * @ht: hash table to add elmts to
 * @key: is the key baby
 * @value: data we want to store
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *mover;
	char *new;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	mover = ht->array[index];
	while (mover)
	{
		if (strcmp(mover->key, key) == 0)
		{
			new = strdup(value);
			if (!new)
				return (0);
			free(mover->value);
			mover->value = new;
			return (1);
		}
		mover = mover->next;
	}
	newnode = make_new_node(key, value);
	if (!newnode)
		return (0);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
