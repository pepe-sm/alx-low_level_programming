#include"main.h"
#include<unistd.h>

/**
 * _putchar - outputs c to std out
 * @c: charcter to be output
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
