#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: text to be appended at the end of a file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes = (text_content != NULL) ? strlen(text_content) : 0;
	int w;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	w = write(fd, text_content, bytes);
	fd = chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (w == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
