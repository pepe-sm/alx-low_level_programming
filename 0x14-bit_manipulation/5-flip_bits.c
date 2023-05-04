#include "main.h"


/**
 * flip_bits - uses xor to evaluate difference in bits
 * @n: first int
 * @m: second int
 * Return: bit diff(flipped)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int out = 0;

	while (res != 0)
	{
	out++;
	res &= (res - 1);
	}
	return (out);
}
