#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: dlistint_t
 * @idx: unsigned int
 * @n: int
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while ((i < (idx - 1)) && tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (i < idx - 1)
		return (NULL);

	if ((i == idx - 1) && (tmp->next == NULL))
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = tmp;
	node->next = tmp->next;
	tmp->next->prev = node;
	tmp->next = node;

	return (node);
}
