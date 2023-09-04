#include "main.h"
/**
 * create_file - Create a file
 * @filename: Name if the file
 * @text_content: Content of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, mode_perm;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (bytes_written = 0; text_content[bytes_written]; bytes_written++)
		;

		mode_perm = write(fd, text_content, bytes_written);

		if (mode_perm == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
