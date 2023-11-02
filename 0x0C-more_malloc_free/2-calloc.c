#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * *_calloc - write a function that allocates memory for an array using malloc
  *
  * @nmemb: elements of array
  *
  * @size: bytes to be allocated
  *
  * Return: NULL or ptr
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = (size_t)nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
	free(ptr);
}
