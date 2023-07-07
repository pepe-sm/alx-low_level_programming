#include "hash_tables.h"

/**
 * hash_table_get - evaluates list of table for key association
 * @ht: pointers to hash table
 * @key: key to find
 *
 * Return: the key if it exists, NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *eval_key;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	eval_key = ht->array[index];
	while (eval_key)
	{
		if (strcmp(eval_key->key, key) == 0)
			return (eval_key->value);
		eval_key = eval_key->next;
	}

	return (NULL);
}
