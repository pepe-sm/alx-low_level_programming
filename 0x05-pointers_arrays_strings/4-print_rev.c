#include"main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');



}
