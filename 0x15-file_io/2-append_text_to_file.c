#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file.
 * @filename: variables to a pointer
 * @text_content: content file
 * Description: functions that appends texts at the end of a file
 * Return: 1 on success, -1 on failure
 */
 
 int append_text_to_file(const char *filename, char *text_content)
{
	int q, rw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	rw = write(q, text_content, len);

	if (q == -1 || rw == -1)
		return (-1);

	close(q);

	return (1);
}
