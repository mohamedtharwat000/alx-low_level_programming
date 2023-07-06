#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 *
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **hash_table_array = NULL;
	size_t i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return (NULL);
	}

	hash_table_array = malloc(size * sizeof(hash_node_t *));
	if (!hash_table_array)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table_array[i] = NULL;
	}

	hash_table->array = hash_table_array;
	hash_table->size = size;

	return (hash_table);
}
