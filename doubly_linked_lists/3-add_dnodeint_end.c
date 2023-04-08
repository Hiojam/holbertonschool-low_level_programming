#include "lists.h"

/**
 * *add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: dlistint_t
 * @n: int
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *element = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (element == NULL)
		return (NULL);

	element->n = n;
	element->next = NULL;

	if (*head == NULL)
	{
		element->prev = NULL;
		*head = element;
		return (element);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	element->prev = tmp;
	tmp->next = element;

	return (element);
}
