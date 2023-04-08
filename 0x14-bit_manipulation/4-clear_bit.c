#include "main.h"

/**
 * clear_bit - make value at index n = 0
 * @n: * to bit to be modified
 * @index: @index to alter
 *
 * Return: on error -1 otherwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
