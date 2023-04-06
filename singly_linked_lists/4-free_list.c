#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 *
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head, *temp2;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp->str);
		free(temp);
		temp = temp2;
	}
}
