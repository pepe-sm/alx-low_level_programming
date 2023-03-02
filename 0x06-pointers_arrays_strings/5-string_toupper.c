#include"main.h"

/**
 * string_toupper - converst frrom lower to upper case
 *
 * @str: string to be reversed
 * Return: pointer to a reversed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= a && str[index] <= z)
			str[index] -= 32;
	}

	return (str);
}
