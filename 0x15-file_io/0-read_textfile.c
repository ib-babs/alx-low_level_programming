#include "main.h"
/**
 * read_textfile - Read data from the file
 * @filename: Name of the file
 * @letters: Sizeof the letters
 * Return: Size of the letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_written;
	ssize_t i;
	char *buffer = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytes_written = read(fd, buffer, letters);

	if (bytes_written == -1 || fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer[bytes_written] = '\0';

	for (i = 0; buffer[i]; i++)
		putchar(buffer[i]);
	close(fd);
	free(buffer);
	return (bytes_written);
}
