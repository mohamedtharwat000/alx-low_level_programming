#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: the hash table you want to delete.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp->next;
		}
	}
	free(ht->array);
	free(ht);
}
