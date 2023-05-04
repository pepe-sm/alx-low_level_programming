#include "main.h"

/**
 * binary_to_uint -convert from binary to uint
 * @b: poimts to string of 1 and 0
 * Return: decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i = 0;

	if (b != NULL)
	{
	for (; b[i]; i++)
	{
	if (b[i] < '0' || b[i] > '1')
	{
	return (0);
	}

	j = 2 * j + (b[i] - '0');
	}
	return (j);
	}
	else
	return (0);
}
