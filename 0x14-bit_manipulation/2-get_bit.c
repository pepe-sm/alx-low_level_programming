#include"main.h"

/**
 * get_bit - returns value of bit at index
 * @n: variable to be checked
 * @index: index to get bit @
 * Return: if error -1 else bit @ index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
