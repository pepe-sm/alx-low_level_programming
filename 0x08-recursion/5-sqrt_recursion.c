#include"main.h"
#include<stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - reutn natural sqrt of a number
 * @n: number to calculare sqrt on
 * Return: the natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural sqrt
 * @n: number to be calculated sqrt
 * @i: number to iterate
 * Return: the natural sqrt
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
