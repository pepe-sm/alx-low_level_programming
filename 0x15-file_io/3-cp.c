#include"main.h"
#include<stdlib.h>
#include<stdio.h>

char *buff(char *file);
void file_term(int fd);

/**
 * buff - create buffer and allocate 1024
 * @file: filename buffer is holding chars for
 *
 * Return: pointer to buffer
 */

char *buff(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * file_term - terminates file descriptors
 * @fd: file descriptor to terminate
 */

void file_term(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannont close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies files
 * @argc: supplied number of arguments
 * @argv: array of pointers to argument
 *
 * Return: 0 on sucess
 */

int main(int argc, char **argv)
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
			exit(97);
	}

	buffer = buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(from, buffer, rd);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	file_term(from);
	file_term(to);

	return (0);
}
