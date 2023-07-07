#include "hash_tables.h"

/**
 * hash_table_create - function creates a new hash table
 * @size: size of the tabe
 *
 * Return: pointer to the new hash table,
 * NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	/* newTable->size = length of list, hash_node_t * = size of elements */
	hash_table->array = calloc(hash_table->size, sizeof(hash_node_t *));
	if (!hash_table->array)
		return (NULL);

	return (hash_table);
}
