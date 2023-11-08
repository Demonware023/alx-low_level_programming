#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - write a function that searches for an integer
  *
  * @array: array
  *
  * @size: size of the array
  *
  * @cmp: a pointer to the function to be used to compare values
  *
  * Return: -1 or 1 or 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (-1);
}
