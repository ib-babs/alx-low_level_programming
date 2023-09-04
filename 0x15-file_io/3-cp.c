#include "main.h"
/**
 * error_checking - Check if the file can be opened
 * @file_from: File from
 * @file_to: File to
 * @argv: Args vector
 * Return: Void
 */
void error_checking(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
}
/**
 * main - Main entry
 * @argc: Ags number
 * @argv: Args vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_cls;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_checking(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
			error_checking(-1, 0, argv);
		nwr = write(file_to, buffer, nchars);

		if (nwr == -1)
			error_checking(0, -1, argv);
	}

	err_cls = close(file_from);
	if (err_cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
