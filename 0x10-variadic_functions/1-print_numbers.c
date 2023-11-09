#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - a function that prints, followed by a new line.
  *
  * @separator: the string to be printed between the strings.
  *
  * @n: numbers of strings passed to the function.
  *
  * Return: Always 0 Success.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(numbers);
	va_start(numbers, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numbers);
}
