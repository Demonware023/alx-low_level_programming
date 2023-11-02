#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
  * *malloc_checked - write a function that allocates memory using malloc
  *
  * @b: parameter
  *
  * Return: 98 or 0 Always Success
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
	free(ptr);
}
