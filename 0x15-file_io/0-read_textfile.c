#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read the text file print to stdout
 * @filename: text file is being read
 * @letters: letters to be read
 * Return: w- actual number of bytes to be read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t tq;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tq = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, tq);

	free(buf);
	close(fd);
	return (wr);
}
