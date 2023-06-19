#include"main.h"

/**
 * _strcat - cancatinates two strings
 * @dest: destination for concatinated strings
 * @src: source os strings
 * Return: concatinated strings
 */

char *_strcat(char *dest, char *src)
{
	int des_len = 0, index = 0;

	while (dest[index++])
		des_len++;

	for (index = 0; src[index]; index++)
	dest[des_len++] = src[index];

	return (dest);
}
