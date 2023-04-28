#include "lists.h"

/**
 * listint_len - function that returns
 * the number of elements in a linked listint_t list.
 * @h: listint_t list.
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *next;
	size_t nodes = 0;

	next = h;

	while (next)
	{
		nodes++;
		next = next->next;
	}
	return (nodes);
}
