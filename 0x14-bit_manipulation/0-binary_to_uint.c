#include"main.h"

/**
 * binary_to_uint - convert binary to unsigned intger
 * @b: charcter to be converted to decimal
 *
 * Return: return unsigned in(converted value)
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int res = 0;

	if (!b)
	{
		return (0);
	}


	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		res = 2 * res + (b[c] - '0');
	}
	return (res);
}
