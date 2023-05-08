#include "main.h"

/**
* append_text_to_file - appends to end of file
* @filename: file name
* @text_content: string to append
*
* Return: on failure or NULL filename -1
*
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int i = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (i = 0; text_content[i];)
	i++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, i);

	if (op == -1 || wr == -1)
	return (-1);

	close(op);
	return (1);
}
