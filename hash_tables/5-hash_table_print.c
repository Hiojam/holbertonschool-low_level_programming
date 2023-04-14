#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: const hash_table_t
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, first = 1;
	hash_node_t *node;

	if (!ht)
		return;

	putchar('{');
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
