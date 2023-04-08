#include"main.h"

/**
 * set_bit - set value of bit @ index to 1
 * @n: pointer to bit of a value
 * @index: index of bit to add 1
 * Return: On error -1 otherwise 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
