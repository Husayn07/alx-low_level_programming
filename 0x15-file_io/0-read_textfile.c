#include "main.h"

/**
 * read_textfile - read and print a text file
 * @filename: filename.
 * @letters: letters
 * Return: if fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wrt);
}
