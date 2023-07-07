#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	size_t i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
