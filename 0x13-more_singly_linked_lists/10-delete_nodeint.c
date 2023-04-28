#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to delete. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int i;

	if (!(*head))
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current->next)
		{
			return (-1);
		}
		current = current->next;
	}

	tmp = current->next;
	if (!tmp)
	{
		return (-1);
	}

	current->next = tmp->next;
	free(tmp);

	return (1);
}
