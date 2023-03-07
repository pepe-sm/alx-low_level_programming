#include"main.h"

/**
 * _memset - fills memory of n bytes pointed to byb s with constant c
 * @s: pointer to memory area to be filled
 * @c: the charcter to fill memory area with
 * @n: number of bytes to be filled
 * Return: returns a pointer
 */

char *_memset(char *s, char c, unsigned int n)
{
	int index;
	char *memory = s, value = c;

	for (index = 0; index <= n; index++)
	memory[index] = value;

	return (memory);

}
