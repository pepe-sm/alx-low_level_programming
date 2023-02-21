#include "main.h"

/**
 * _abs - returns absolute value
 * @c: the number to be computed
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	return (c);
}
