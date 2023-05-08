#include "main.h"

/**
 *create_file - function creates file
 *@filename: file name of created file
 *@text_content: file content
 *
 *Return: on success 1 else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrt;
	int i = 0;

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (!filename)
	return (-1);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
	while (text_content[i])
	i++;

	wrt = write(fd, text_content, i);
	if (wrt == -1)
	return (-1);
	}
	close(fd);

	return (1);
}
