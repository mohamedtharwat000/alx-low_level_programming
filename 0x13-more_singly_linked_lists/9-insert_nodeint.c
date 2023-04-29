#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: A pointer to the listint_t list.
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: n member;
 * Return:  the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next;
	listint_t *new_node;
	unsigned int current_index = 0;

        if (!head)
        {
	        return (NULL);        
        }

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

        *next = *head;
	while (next->next)
	{ 
		if (current_index + 1 == idx)
		{
			new_node->next = next->next->next;
			next->next = new_node;
			return (new_node);
		}
		current_index++;
		next = next->next;
	}

	free(new_node);
	return (NULL);
}

