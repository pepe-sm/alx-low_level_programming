#include"main.h"

/**
 * append_text_to_file - Appands text to a file
 * @filename: poimter to file name
 * @text_content: string to append
 *
 * Return: if filename = NULL -1
 *		if file lacks write or non existent -1
 *		else 1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	return (-1);

	close(op);

	return (1);
}
