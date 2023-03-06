#include"main.h"
#include<unistd.h>

/**
 * _putchar - returns c to output
 * @c: character to be outputed
 * Return: 1 on success -1 on error and errorno is set appropriatly
 */

int _putchar(char c)
{
	ereturn (write(1, &c, 1));
}
