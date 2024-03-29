#include "lists.h"

/**
 * sum_dlistint - Sum all the data (n) of a dlistint_t linked list.
 *
 * @head: dlistint_t
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
