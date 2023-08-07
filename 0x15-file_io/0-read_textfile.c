#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text of the file and print it to STDOUT.
 * @filename: textof the that file being read
 * @letters:the number of letters to be read
 * Return: w- actual Number of the bytes printed and read
 *        is 0 when function fails or filename Is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t R;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	R = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, R);

	free(buf);
	close(fd);
	return (w);
}

