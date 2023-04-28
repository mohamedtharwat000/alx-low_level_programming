#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: A pointer to the listint_t list.
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next = head;
	unsigned int current_index = 0;

	while (next)
	{
		if (current_index == index)
		{
			return (next);
		}
		current_index++;
		next = next->next;
	}
	return (NULL);
}
