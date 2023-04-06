#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: list_t
 * @str: *char
 * Return: The address of a new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *link = malloc(sizeof(list_t));

	if (link == NULL)
		return (NULL);

	for (; str[length]; length++)
		;

	link->str = strdup(str);
	link->len = length;

	link->next = *head;

	*head = link;

	return (link);
}
