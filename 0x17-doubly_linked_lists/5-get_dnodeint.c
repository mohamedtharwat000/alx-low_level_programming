#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list.
 * @head: Pointer to the head node of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: Nth node of a linked list or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int n = 0;

	while (current != NULL)
	{
		if (n == index)
		{
			return (current);
		}
		n++;
		current = current->next;
	}

	return (NULL);
}
