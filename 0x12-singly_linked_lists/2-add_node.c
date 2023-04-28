#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	return (new_node);
}
