#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * append_text_to_file - Write a fucntion that appends text at the-
  * -end of a file.
  *
  * @filename: is the name of the file
  *
  * @text_content: content.
  *
  * Return: -1 for Error or 1 for Success.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);

	return (1);
}
