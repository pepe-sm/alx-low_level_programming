#include"main.h"
#include<stdio.h>

/**
 * _strchr - Entry point
 * @c: input
 * @s: input
 * Return: 0 on Success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 <= '\0'; i++)
	{
	if (s[i] == c)
	return (s + i);
	}
	return (NULL);
}
