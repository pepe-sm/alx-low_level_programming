#include<stdio.h>
/**
 * main - prints alpha numeric in Upper & lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

		putchar('\n');

		return (0);
}
