#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hash_table_t
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *tmp;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
