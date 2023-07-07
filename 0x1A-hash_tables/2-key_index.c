#include "hash_tables.h"

/**
 * key_index - calculates the index of assigned key
 * @key: value to hash
 * @size: size of the array
 *
 * Return: index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
