#include <stdio.h>
/**
 * main - Prints alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aplh[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(aplh[i]);
	}
	putchar('\n');
	return (0);
}
