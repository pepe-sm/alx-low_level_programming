#include"main.h"

/**
 * _strlen - checks lengt of string
 * @s: string to be chacked
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
