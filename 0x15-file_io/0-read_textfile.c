#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_written;
	ssize_t i;
	char buffer[letters];
	if (filename == NULL) // Checking for errors
		 return (0);

	fd = open(filename, O_RDONLY); // Open the file for reading
	bytes_written = read(fd, buffer, letters);

	if (bytes_written == -1 || fd == -1) // Checking for errors
	{
		close(fd);
		return (0);
	}
	buffer[bytes_written] = '\0'; // Reading the file

	for (i = 0; buffer[i]; i++)
		putchar(buffer[i]);
	close(fd);

	return (bytes_written);
}
