#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key cannot be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
