#include"main.h"

/**
 * flip_bits - returns number of bits needed to flip one number to another
 * @n: the number to be flipped
 * @m: number to be flipped to
 *
 * Return: Number of flipped bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
