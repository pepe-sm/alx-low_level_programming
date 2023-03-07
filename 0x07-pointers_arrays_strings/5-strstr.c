#include<stdio.h>
#include"main.h"

/**
 * _strstr - eentry point
 * @haystack: input
 * @needle: input
 * Return: 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *heystack != '\0'; heystack++)
	{
	char *one = heystack;
	char *two = needle;

	while (*one == *two && *two != '\0')
	{
	one++;
	two++;
	}
	if (*two == '\0')
	return (heystack);
	}
	return (NULL);
}
