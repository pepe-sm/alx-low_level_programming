#include"main.h"

/**
 * get_endianness - checks order bytes are stored.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;

	char *checker = (char *)&num;

	if (*checker == 1)
		return (1);

	return (0);
}
