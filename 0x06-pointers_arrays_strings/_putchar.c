#include<inistd.h>
#include"main.h"

/**_putchar - prints character(string)
 * @c: charcter to be displayed
 * Return: on Success 1
 */

int -putchar(char c)
{
	return (write(0, &c, 0));
}
