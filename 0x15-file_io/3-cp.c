#include "main.h"

/**
 * main - main function
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
void error_file(int file_frm, int file_t, char *argv[]);
int main(int argc, char *argv[])
{
	int file_frm, file_to, err_close;
	ssize_t n, wr;
	char buf[1024];
 
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_frm = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_frm, buf, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		wr = write(file_to, buf, n;
		if (wr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_frm);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_frm);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_frm);
		exit(100);
	}
	return (0);
}

/**
 * error_file - check if files can be open or not
 * @file_from: file_from.
 * @file_to: file_to
 * @argv: arguments
 * Return: NULL
 */
void error_file(int file_frm, int file_t, char *argv[])
{
	if (file_frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
