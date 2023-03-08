#include"main.h"

/**
 * _puts_recursion - reuturns string with a new line
 * @s: the string to be outputted
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
