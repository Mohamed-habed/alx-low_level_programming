#include "main.h"

/**
 * create_file - Create the file.
 * @filename: A pointer to The name of the file to create it.
 * @text_content: A pointer to a string to Write the File.
 *
 * Return: If the function has failed - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int Op, W, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	Op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(Op, text_content, len);

	if (Op == -1 || W == -1)
		return (-1);

	close(Op);

	return (1);
}

