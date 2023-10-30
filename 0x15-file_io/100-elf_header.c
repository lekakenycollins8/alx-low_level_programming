#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
#include <string.h>

#define ELF_MAGIC 0x464C457F

/**
 * struct Elf32_Ehdr - ELF header structure
 *
 * @e_ident:     Identification bytes, including the magic number.
 * @e_type:      Type of ELF file (e.g., executable, relocatable).
 * @e_machine:   Target architecture (e.g., x86, ARM).
 * @e_version:   ELF version.
 * @e_entry:     Entry point address for executables.
 * @e_phoff:     Program header table offset.
 * @e_shoff:     Section header table offset.
 * @e_flags:     Processor-specific flags.
 * @e_ehsize:    ELF header size.
 * @e_phentsize: Size of a program header table entry.
 * @e_phnum:     Number of entries in the program header table.
 * @e_shentsize: Size of a section header table entry.
 * @e_shnum:     Number of entries in the section header table.
 * @e_shstrndx:  Index of the section header containing section names.
 *
 * This structure represents the header of an ELF (Executable and Linkable Format) file,
 * providing information about the file's structure and characteristics.
 */
typedef struct {
  unsigned char e_ident[16];
  unsigned short e_type;
  unsigned short e_machine;
  unsigned int e_version;
  unsigned int e_entry;
  unsigned int e_phoff;
  unsigned int e_shoff;
  unsigned int e_flags;
  unsigned short e_ehsize;
  unsigned short e_phentsize;
  unsigned short e_phnum;
  unsigned short e_shentsize;
  unsigned short e_shnum;
  unsigned short e_shstrndx;
} Elf32_Ehdr;

/**
 * open_elf_file - Opens an ELF file.
 * @filename: The name of the ELF file to open.
 *
 * Returns the file descriptor of the opened file or exits on error.
 */
int open_elf_file(const char* filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(1);
    }
    return fd;
}

/**
 * read_elf_header - Reads the ELF header from an open file.
 * @fd: The file descriptor of the open ELF file.
 * @header: Pointer to the Elf32_Ehdr structure to store the header.
 *
 * Exits on error if reading fails.
 */
void read_elf_header(int fd, Elf32_Ehdr* header) {
    if (read(fd, header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
        fprintf(stderr, "Error reading ELF header\n");
        exit(98);
    }
}

/**
 * print_elf_header - Prints information from the ELF header.
 * @header: The ELF header to print information from.
 */
void print_elf_header(const Elf32_Ehdr* header) {
	int i;
    printf("Magic: ");
    for (i = 0; i < 16; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                             %s\n",
        header->e_ident[4] == 1 ? "ELF32" : "ELF64");
    printf("Data:                              %s\n",
        header->e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d\n", header->e_ident[6]);
    printf("OS/ABI:                            %s\n", header->e_ident[7] == 0 ? "UNIX - System V" : "???");
    printf("ABI Version:                       %d\n", header->e_ident[8]);
    printf("Type:                              %s\n",
        header->e_type == 1 ? "REL (Relocatable file)" :
        header->e_type == 2 ? "EXEC (Executable file)" : "???");
    printf("Entry point address:               0x%x\n", header->e_entry);
}

/**
 * close_elf_file - Closes an open ELF file.
 * @fd: The file descriptor of the open ELF file.
 */
void close_elf_file(int fd) {
    close(fd);
}

int main(int argc, char* argv[])
{
	int fd;
    Elf32_Ehdr header;
    if (argc < 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(1);
    }

    fd = open_elf_file(argv[1]);

    read_elf_header(fd, &header);

    if (memcmp(header.e_ident, (const void*) ELF_MAGIC, 4) != 0)
    {
	    fprintf(stderr, "%s is not an ELF file\n", argv[1]);
	    exit(98);
    }

    print_elf_header(&header);

    close_elf_file(fd);
    return 0;
}
