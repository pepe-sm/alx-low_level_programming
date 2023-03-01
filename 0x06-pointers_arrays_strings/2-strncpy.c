#include"main.h"

/**
 * strncpy - copies strings
 * @dest: buffer storing string copy
 * @src: source string
 * @n: maximum number of bytes to be copied
 * Return: dest( a pointer to the resulting string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, index = 0;

	while (src[index++])
		scr_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
