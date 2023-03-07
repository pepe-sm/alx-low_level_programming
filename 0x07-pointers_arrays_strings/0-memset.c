#include"main.h"

/**
 * _memset - fills memory of n bytes pointed to byb s with constant c
 * @s: pointer to memory area to be filled
 * @b: the charcter to fill memory area with
 * @n: number of bytes to be filled
 * Return: changed array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n < 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (i);

}
