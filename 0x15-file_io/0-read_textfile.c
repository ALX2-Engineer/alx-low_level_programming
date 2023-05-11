#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to stdout
 * @filename: text file that is being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes that is being read and printed
 *        0 when function fails or filename is null
 */
 
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
