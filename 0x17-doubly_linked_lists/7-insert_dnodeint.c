#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * in a doubly linked list.
 * @h: Pointer to the pointer to the head node of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current = *h;
	size_t pos = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current != NULL)
	{
		if (pos + 1 == idx)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
			{
				current->next->prev = new_node;
			}
			current->next = new_node;
			return (new_node);
		}

		current = current->next;
		pos++;
	}

	free(new_node);
	return (NULL);
}
