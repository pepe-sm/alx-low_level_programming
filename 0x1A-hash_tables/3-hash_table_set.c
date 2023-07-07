#include "hash_tables.h"

/**
 * add - insert node to begin of a list
 * @head: pointers to first node
 * @key: key to add in node
 * @data: value to add to node
 *
 * Return: the new node,
 * 0 on failure
 */
hash_node_t *add(hash_node_t **head, const char *key, const char *data)
{
	hash_node_t *Node = NULL;

	Node = malloc(sizeof(hash_node_t));
	if (!Node)
		return (0);

	Node->key = strdup(key);
	Node->value = strdup(data);
	Node->next = *head;
	*head = Node;

	return (Node);
}

/**
 * hash_table_set - add node to hash table
 * @ht: pointers to hash
 * @key: key to hash
 * @value: value associated with key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value), temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	add(&ht->array[index], key, value);
	return (1);
}
