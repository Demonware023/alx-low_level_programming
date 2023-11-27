#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * read_textfile - Write a function that reas a text file and-
  * prints it to the POSIX standard output.
  *
  * @filename: file.
  *
  * @letters: the number of letters it should read and print.
  *
  * Return: NULL or 0.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
