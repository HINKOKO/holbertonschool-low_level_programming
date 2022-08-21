#include "hash_tables.h"

/**
 * shah_table_create - create a sorted hash table PHP elephant you my friend
 * @size: size of sorted hash table
 * Return: the sorted hash table we create
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *stb = malloc(sizeof(shash_table_t));

	if (!stb)
		return (NULL);
	stb->size = size;
	stb->shead = NULL;
	stb->stail = NULL;
	stb->array = malloc(size * sizeof(shash_node_t));
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
 * shash_node_t - give birth to a new node for our sorted hash table
 * @key: key for value
 * @value: to be stored
 * Return: NULL for failure or the new node if successfull
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
 * sorted_insert - add a newnode in a sorted hash table,
 * in a sorted way to the linked list (sorted by ASCII's values)
 * @ht: the sorted hash table
 * @node: the node to add
 */

void sorted_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *browser;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	browser = ht->shead;
	while (browser != NULL)
	{
		if (strcmp(node->key, browser->key) < 0)
		{
			node->snext = browser;
			node->sprev = browser->sprev;
			browser->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		browser = browser->next;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}
/**
 * shash_table_set - sets key to value in a sorted hash table
 * @ht: the hash table we modify
 * @key: is the key of data
 * @value: data to push
 * Return: 1 for success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *newnode, *mover;
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
		mover = mover->snext;
	}
	newnode = make_new_snode(key, value);
	if (!newnode)
		return (0);
	newnode->snext = ht->array[index];
	ht->array[index] = newnode;
	sorted_insert(ht, newnode);
	return (1);
}

/**
 * shash_table_get - gets a value associated with a key
 * @ht: sorted hash table we look into
 * @key: the key we are lookin' to
 * Return: value associated with key or NULL if we fail to find
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *sprinter;
	char status = 0; /* trick to skip last comma */

	if (!ht || !ht->array)
		return;
	printf("{");
	sprinter = ht->shead;
	while (sprinter != NULL)
	{
		if (status == 1)
			printf(", ");
		printf("'%s': '%s'", sprinter->key, sprinter->value);
		status = 1;
		sprinter = sprinter->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print sorted hash table in reverse
 * @ht: sorted hash table to be printed
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *sprinter;
	char status = 0; /* trick to skip last comma */

	if (!ht || !ht->array)
		return;
	printf("{");
	sprinter = ht->stail;
	while (sprinter != NULL)
	{
		if (status == 1)
			printf(", ");
		printf("'%s': '%s'", sprinter->key, sprinter->value);
		status = 1;
		sprinter = sprinter->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *messiah;

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
