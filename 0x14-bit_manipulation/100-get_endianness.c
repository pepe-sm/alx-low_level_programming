#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 big endian, 1 little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *i = (char *)&num;

	if (*i == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
