#include "main.h"

/**
  * display_error - displays error message to stderr & exits 98.
  *
  * @message: error message.
  *
  * Return: exit status code of 98.
  */

void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
  * display_elf_header - takes an Elf64_Ehdr struct pointer and displays-
  * the relevant information according to the specified format.
  *
  * @header: pointer to struct.
  *
  * Return: Display.
  */

void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:  ");/* Display the magic number */
	for (i = 0 ; i < EI_NIDENT ; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	/* Display other ELF header information */
	printf("  Class:			%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:				%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
  * main - main function.
  *
  * @argc: argument count
  *
  * @argv: argument vector
  *
  * Return: 0 Always Success.
  */

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Could not open file");
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		display_error("Error reading ELF header");
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		display_error("Not an ELF file");
	}

	display_elf_header(&header);

	close(fd);

	return (0);
}
