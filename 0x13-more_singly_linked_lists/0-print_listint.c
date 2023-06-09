#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: listint_t list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *next;
	size_t nodes = 0;

	next = h;

	while (next)
	{
		printf("%d\n", next->n);
		nodes++;
		next = next->next;
	}
	return (nodes);
}
