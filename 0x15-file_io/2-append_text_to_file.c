#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A Pointer To The Name Of The File.
 * @text_content: The string to add to The end of the whole file.
 *
 * Return: If the function fails Or Filename is NULL - -1.
 *         If the File does not exist the user lacks Write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Op, W, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Op = open(filename, O_WRONLY | O_APPEND);
	W = write(Op, text_content, len);

	if (Op == -1 || W == -1)
		return (-1);

	close(Op);

	return (1);
}

