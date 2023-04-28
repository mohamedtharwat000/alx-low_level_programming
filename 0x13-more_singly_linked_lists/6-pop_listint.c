#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list,
 * @head: A pointer to the listint_t list.
 * Return: the head node’s data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *_head = *head;
	int n;

	if (!_head)
	{
		return (0);
	}

	n = _head->n;
	*head = _head->next;
	free(_head);

	return (n);
}
