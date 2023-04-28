#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list_t list.
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	list_t *next;
	size_t nodes = 0;

	next = h;

	while (next)
	{
		if (!next->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", next->len, next->str);
		}
		nodes++;
		next = next->next;
	}
	return (nodes);
}
