#include"main.h"

/**
 * print_most_numbers - prints number 0 to 9 avoids 
 * Description: prints number excludes 2 and 4
 * Return: numbers 0 to 9
 */

void print_most_numbers(void)
{
	int x;

	for(; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n')
}
