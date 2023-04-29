#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: A pointer to the listint_t list.
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	*head = NULL;
}
