#include "lists.h"

/**
 * *get_dnodeint_at_index - Gets the index of a node
 *
 * @head: dlistint_t
 * @index: unsigned int
 * Return: returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (node == NULL)
		return (NULL);

	for (; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	node = head;
	return (node);
}
