#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - a function that executes a funtion given
  * as a parameter on each element of an array
  *
  * @array: array to check
  *
  * @size: size of the array
  *
  * @action: action to take on each element of the array
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
