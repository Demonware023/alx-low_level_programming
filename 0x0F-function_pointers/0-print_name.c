#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_name - function that prints a name using fucntion pointers
  *
  * @name: parameter
  *
  * @f: pointer function
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
