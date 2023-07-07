#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: points to hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0, j = 0; /*j refers to space*/
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (j == 1)
				printf(", ");
			else
				j = 1;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		i++;
	}

	printf("}\n");
}
