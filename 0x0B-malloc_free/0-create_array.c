#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * *create_array - creates an array of chars and initlize with a specfic char
  *
  * @size: size of the array to create(must be positive)
  *
  * @c: character to initialize inside the array
  *
  * Return: NULL or pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptrArray = malloc(size * sizeof(char));

	for (i = 0 ; i < size ; i++)
	{
		ptrArray[i] = c;
	}

	if (ptrArray == NULL)
	{
		return (NULL);
	}

	return (ptrArray);
	free(ptrArray);
}
