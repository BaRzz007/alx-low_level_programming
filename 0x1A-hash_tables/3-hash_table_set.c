#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: hash table to add/update key/value to
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || strlen(key) < 1)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->value = malloc(sizeof(value));
	if (!node->value)
	{
		free(node);
		return (0);
	}
	strcpy(node->value, value);

	node->key = malloc(sizeof(key));
	if (!node->key)
	{
		free(node->value);
		free(node);
		return (0);
	}
	strcpy(node->key, key);

	index = key_index((const unsigned char *)node->key, ht->size);
	node->next = NULL;
	if (ht->array[index])
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
		ht->array[index] = node;

	return (1);
}
