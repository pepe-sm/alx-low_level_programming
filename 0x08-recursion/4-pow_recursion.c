#include"main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: number to be powered
 * @y: number to power x by
 * Return: valus multiplied by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
