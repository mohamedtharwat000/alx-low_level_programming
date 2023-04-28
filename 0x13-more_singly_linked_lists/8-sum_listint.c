#include "lists.h"

/**
 * sum_listint - function that returns
 * the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the listint_t list.
 * Return:  sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *next = head;
	int sum = 0;

	while (next)
	{
		sum += next->n;
		next = next->next;
	}
	return (sum);
}
