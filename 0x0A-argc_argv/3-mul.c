#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	/*declared a variable */
	int i, j;

	/*condition to be met before code advancing*/
	if (argc == 3)
	{
		/*give a value of first array*/
		i = atoi(argv[1]);
		/*give value of seccond array to j*/
		j = atoi(argv[2]);
		/*print multiplication of j,i*/
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
