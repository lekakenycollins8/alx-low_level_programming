#include "main.h"

/**
 * read_textfile -  reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: name of the file
 * @letters:  the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read;
	char *buffer;
	size_t bytes_read;
	size_t bytes_write;

	if (filename == NULL)
	{
		return (0);
	}
	fd_read = open(filename, O_RDONLY);
	if (fd_read == -1)
	{
		return (0);
	}
	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd_read);
		return (0);
	}
	bytes_read = read(fd_read, buffer, letters);

	if (bytes_read == (size_t)-1)
	{
		close(fd_read);
		free(buffer);
		return (0);
	}
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_write == (size_t)-1 || bytes_write != bytes_read)
	{
		close(fd_read);
		free(buffer);
		return (0);
	}
	close(fd_read);
	free(buffer);
	return (bytes_read);
}
