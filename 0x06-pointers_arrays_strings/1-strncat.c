#include"main.h"

/**
 * _strncat - concatinates two strings, uses n number of bytes from src
 * @dest: return(string to be appended upon
 * @src: cource of string to be appended to dest
 * @n: size of bytes from src to be appended to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int des = 0, index = 0;

	while (dest[index++])
	des++;

	for (index = 0; scr[index] && index < n; index++)
	dest[des++] = scr[index];

	return (dest);
