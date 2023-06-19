#include"main.h"

/**
 * _strcmp - compares to strings
 * @s1: frist string to be compared
 * @s2: second string to be compared to the first
 *
 * Return: on Success 0, on failure diff btwn s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && s1 == s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
