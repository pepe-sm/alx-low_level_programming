#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
 */
int main (void)
{
	int p,d;

	for (p = '0'; p < '9'; p++)
	{
	for (d = p+1; d <= '9'; d++)
	{
	if (p != d)
	{
	putchar(p);
	putchar(d);
	if (p == '8' && d == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
