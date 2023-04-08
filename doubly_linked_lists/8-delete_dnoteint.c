#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t.
 *
 * @head: **dlistint_t
 * @index: unsigned int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while ((i < index) && tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->next)
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
	}
	else
		tmp->prev->next = NULL;

	free(tmp);
	return (1);
}
