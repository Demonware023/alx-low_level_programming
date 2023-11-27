#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - write a fucntion that copies the content of a file to-
  * another file.
  *
  * @argc: argument count
  *
  * @argv: argument vector
  *
  * Return: 98 or 97 or 99.
  */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
