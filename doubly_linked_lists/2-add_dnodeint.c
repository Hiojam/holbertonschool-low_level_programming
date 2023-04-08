#include "lists.h"

/**
 * *add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 *
 * @head: dlistint_t
 * @n: int
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *element = malloc(sizeof(dlistint_t));

	if (element == NULL)
		return (NULL);

	element->n = n;
	element->next = NULL;
	element->prev = NULL;

	if (*head == NULL)
	{
		*head = element;
		return (element);
	}

	element->next = *head;
	*head = element;
	element->next->prev = element;
	return (element);
}
