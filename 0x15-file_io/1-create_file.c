#include "main.h"

/**
 * create_file - create a file
 * @filename: filename.
 * @text_content: text content
 * Return: 1 success | -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (l = 0; text_content[l]; l++)
		;

	wr = write(fd, text_content, l);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
