#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: Pointer to the head address of the list.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *tmp = NULL;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
