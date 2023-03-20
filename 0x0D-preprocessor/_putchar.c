#include<unistd.h>

/**
 * _putchar - writes charcter c to stdout
 * @c: character to be output
 *
 * Return: on Sucess 1
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
