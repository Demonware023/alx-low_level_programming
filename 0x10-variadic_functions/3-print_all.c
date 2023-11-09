#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - Write a function that prints anything.
  *
  * @format: list of types of arguments passed to the function.
  *
  * Return: nil or format.
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list(args);
	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args,int));
				break;
			case 'f':
				printf("%f, ", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
					printf("%s", str);
				break;
		}
	}
	printf("\n");
	va_end(args);
}
