#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns
 * the number of elements in a linked list_t list.
 * @h: list_t list.
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *next;
	size_t nodes = 0;

	next = h;

	while (next)
	{
		nodes++;
		next = next->next;
	}
	return (nodes);
}
