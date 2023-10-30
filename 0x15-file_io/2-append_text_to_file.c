#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd_write;
	int bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}
	fd_write = open(filename, O_WRONLY | O_APPEND);

	if (fd_write == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	bytes_write = write(fd_write, text_content, strlen(text_content));

	if (bytes_write == -1)
	{
		close(fd_write);
		return (-1);
	}
	close(fd_write);
	return (1);
}
