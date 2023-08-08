#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text content
 * Return: 1 if file exists | -1 if file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;

		wr = write(fd, text_content, l);

		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
