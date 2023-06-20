#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * in a doubly linked list.
 * @head: Pointer to the pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *tmp = NULL;
	size_t pos = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (pos + 1 == index)
		{
			tmp = current->next;
			if (tmp == NULL)
			{
				return (-1);
			}
			current->next = tmp->next;
			if (tmp->next != NULL)
			{
				tmp->next->prev = current;
			}
			free(tmp);
			return (1);
		}

		current = current->next;
		pos++;
	}

	return (-1);
}
