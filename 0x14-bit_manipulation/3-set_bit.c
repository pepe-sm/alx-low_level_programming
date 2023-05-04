#include "main.h"

/**
 * set_bit - set bit value to 1 @ index
 * @index: index to alter bit
 * @n: int
 * Return: 1 on sucess else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	return (-1);

	*n |= (1 << index);
	return (1);
}


