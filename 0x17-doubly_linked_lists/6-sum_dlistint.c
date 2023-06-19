#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the values in a doubly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of the values in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
