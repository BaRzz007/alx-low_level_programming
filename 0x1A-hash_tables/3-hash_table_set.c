#include <stdio.h>
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
	hash_node_t *node, *current;

	if (!key || strlen(key) < 1)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key))
		{
			strcpy(current->value, value);
			break;
		}
		else
			current = current->next;
	}
	if (current)
		return (1);

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
	node->key = (char *)key;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
