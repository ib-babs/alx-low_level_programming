#include "main.h"
/**
 * create_file - Create a file
 * @filename: Name if the file
 * @text_content: Content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t length = strlen(text_content);
	char *buffer = malloc(length + 1);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR);
	bytes_written = write(fd, buffer, length);
	buffer[length] = '\0';

	if (fd == -1 || bytes_written == -1 || buffer == NULL)
		return (-1);

	free(buffer);
	return (1);
}
