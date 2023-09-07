#include "main.h"
#include <string.h>

/**
 * create_file -  a function that creates a file.
 * @filename: name of the file.
 * @text_content: content.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes = strlen(text_content);
	int bytes_written = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		write(2, "fails", 5);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytes_written = write(0, text_content, bytes);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	if (chmod(filename, 0600) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
