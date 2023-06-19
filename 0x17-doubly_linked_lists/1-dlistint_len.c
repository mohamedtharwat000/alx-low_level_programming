#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_num = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nodes_num++;
	}

	return (nodes_num);
}
