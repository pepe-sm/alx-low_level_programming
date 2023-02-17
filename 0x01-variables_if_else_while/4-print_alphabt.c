#include<stdio.io>
/**
 * main - Entry point. Output alph without q && e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
		putchar('\n');
		return (0);
}
