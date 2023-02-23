#include"main.h"

/**
 * more_numbers - prints 1 to 14 10x
 * Return: 10 times the number 1 to 14
 */

void more_numbers(void)
{
	int x, y;

	for(x = 0; x <= 10; x++)
	{
	for(y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
