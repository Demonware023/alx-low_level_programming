#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - a function that returns the sum of all its parameters.
  *
  * @n: costant count.
  *
  * Return: Always 0 Success.
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list(my_sum);
	va_start(my_sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(my_sum, int);
	}

	return (sum);
	va_end(my_sum);
}
