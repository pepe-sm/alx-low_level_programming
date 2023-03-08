#include"main.h"

/**
 * _strlen_recursion - print string length
 * @s: String to be counted
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
	len++;
	len += _strlen_recursion(s + 1);
	}
	return (len);
}
