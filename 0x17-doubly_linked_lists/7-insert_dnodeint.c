#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to the pointer to the head node of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (current != NULL && idx > 0)
	{
		current = current->next;
		idx--;
	}

	if (idx == 0)
	{
		new_node->prev = current->prev;
		new_node->next = current;
		if (current->prev != NULL)
		{
			current->prev->next = new_node;
		}
		current->prev = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
