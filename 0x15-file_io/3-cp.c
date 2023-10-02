#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(int ac, char **av)
{
	int fd_read;
	int fd_write;
	char buffer[BUFFER_SIZE];
	int bytes_read;
	int bytes_write;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_read = open(av[1], O_RDONLY);

	if (fd_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_write = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);

	if (fd_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((bytes_read = read(fd_read, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_write = write(fd_write, buffer, bytes_read);
		if (bytes_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_read);
			close(fd_write);
			exit(99);
		}
	}
	close(fd_read);
	close(fd_write);

	if (fd_read == -1 || fd_write == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_read);
		dprintf(2, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	exit(0);
}
