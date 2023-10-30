#include "main.h"
#include <string.h>

/**
 * create_file -  creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd_write;
	int bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd_write = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);

	if (fd_write == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd_write);
		return (1);
	}
	ftruncate(fd_write, strlen(text_content));

	bytes_write = write(fd_write, text_content, strlen(text_content));

	if (bytes_write == -1)
	{
		close(fd_write);
		return (-1);
	}
	close(fd_write);
	return (1);
}
