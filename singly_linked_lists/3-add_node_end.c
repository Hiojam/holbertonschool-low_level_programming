#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: list_t
 * @str: *char
 * Return: The address of a new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;
	list_t *link = malloc(sizeof(list_t));
	list_t *last;

	if (link == NULL)
		return (NULL);

	for (; str[length]; length++)
		;

	link->str = strdup(str);
	
	if (link->str == NULL)
	{
		free(link);
		return (NULL);
	}
	link->len = length;
	link->next = NULL;

	if (*head == NULL)
	{
		*head = link;
		return (link);
	}

	last = *head;

	while (last->next)
		last = last->next;

	last->next = link;

	return (link);
}
