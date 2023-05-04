#include "main.h"

/**
 * get_bit - return bit value at given index
 * @index: index to be returned
 * @n: int
 * Return: valur of index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
	return (-1);

	i = n >> index;

	return (i & 1);
}
