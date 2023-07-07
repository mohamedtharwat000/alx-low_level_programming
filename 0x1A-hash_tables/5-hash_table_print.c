#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: the hash table you want to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;

        if (ht == NULL) 
        { 
               return; 
        }

	printf("{");

	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		node = ht->array[i];
		printf("'%s': '%s'", node->key, node->value);
		i++;
		break;
	}

	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		node = ht->array[i];
		while (node)
		{
			printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}

	printf("}\n");
}
