#include<unistd.h>

/**
 * _putchar - writes charcter c to output
 * @c: char to be printed
 * Return: On success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
