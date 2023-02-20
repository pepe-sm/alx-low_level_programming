#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p, d, q;

	for (p = '0'; p < '9'; p++)
	{
	for (d = p + 1; d <= '9'; d++)
	{
	for (q = d + 1; q <= '9'; q++)
	{
	if ((p != d) != q)
	{
	putchar(p);
	putchar(d);
	putchar(q);
	if (p == '7' && d == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
