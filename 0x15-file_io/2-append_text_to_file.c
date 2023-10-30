#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, op;

	if (filename == NULL)
		return (-1);
	if (text_context != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}
	else
		i = 0;
	op = open(filename, O_WRONLY | O_APPEND);
	write(op, text_content, i);
	if (op == -1)
		return (-1);
	close(op);
	return (1);
}
