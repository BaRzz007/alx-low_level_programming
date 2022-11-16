#include "hash_tables.h"

/**
 * hash_table_create - Initializes a hash table
 *
 * @size: Size of hash_table_t array
 *
 * Return: pointer to hash_table_t on success or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash_table->array = array;

	return (hash_table);
}
