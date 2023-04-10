#include"main.h"
#include<stdlib.h>

/**
 * read_textfile - read file and print output to STDOUT
 * @filename: pointer to a filename
 * @letters: Number of letters function should read
 *
 * Return: 0 on failure or NULL pointer reference
 *		otherwise bytes of function R/W
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);

	return (wr);

}
