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
	FILE *file;
	char *buffer;
	size_t bytesRead;
	size_t bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead == 0)
	{
		free(buffer);
		fclose(file);
		return(0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = write(1, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (bytesRead);
}
