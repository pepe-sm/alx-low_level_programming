#include "main.h"

/**
 * clear_bit - Sets value of bit to 0 at index
 * @n: int
 * @index: point to change the bit to 0
 * Return: 1 on success -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	return (-1);

	*n &= ~(1 << index);

	return (1);
}
