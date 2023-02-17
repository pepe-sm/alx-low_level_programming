#include<stdio.h>
/**
 * main - prints hecadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}

	putchar('\n');

	return (0);
}
