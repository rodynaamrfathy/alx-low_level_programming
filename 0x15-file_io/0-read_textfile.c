#include "main.h"
#include <fcntl.h>


/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: file name.
 * @letters:  number of letters it should read and print.
 *
 * Return: NULL return 0, returns the actual
 * number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = (char *)malloc(letters);
	if (!buf)
	{
		close(fd);
		return (-1);
	}
	bytes = read(fd, buf, letters);
	if (bytes == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}
	bytes = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}
	free(buf);
	close(fd);
	return (bytes);
}
