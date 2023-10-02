#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct ElfHeader - Elfheader structure
 * @magic: Magic number
 * @class: Class (32/64-bit)
 * @data: data representation (little/big endian)
 * @version: ELF version
 * @os_abi: OS/ABI identification
 * @abi_version: ABI version
 * @pad: padding
 * @type: type of file
 * @machine: machine architecture
 * @version2: version of the file
 * @entry: entry point address
 */

typedef struct
{
	unsigned char magic[4];
	unsigned char class;
	unsigned char data;
	unsigned char version;
	unsigned char os_abi;
	unsigned char abi_version;
	unsigned char pad[7];
	short type;
	short machine;
	int version2;
	long entry;
} ElfHeader;

/**
 * display_elf_header_info - Display information from the ELF header
 * @header: Pointer to the ELF header structure
 */

void display_elf_header_info(ElfHeader *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < 4; i++)
	{
		printf("%02x ", header->magic[i]);
	}
	printf("\nClass: %s\n", header->class == 1 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header->data == 1 ? "Little Endian" : "Big Endian");
	printf("Version: %d (current)\n", header->version);
	printf("OS/ABI: %d\n", header->os_abi);
	printf("ABI Version: %d\n", header->abi_version);
	printf("Type: %d\n", header->type);
	printf("Entry point address: %lx\n", header->entry);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	int fd;
	ElfHeader header;
	size_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	
	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(ElfHeader));

	if (bytes_read != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error: Not a valid ELF file\n");
		close(fd);
		exit(98);
	}
	display_elf_header_info(&header);
	close(fd);
	return (0);
}
