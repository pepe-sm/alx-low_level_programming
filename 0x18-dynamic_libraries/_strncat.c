#include"main.h"

/**
 * strncat - concatinate two strings
 * @dest: string to be appended to
 * @scr: string to append
 * @n: value in bytes to append
 *
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
