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
	int j = 0;
	char *str;
	double flt;
	int num;
	char ch;
	char *separator = "";
	int printed = 0;

	va_list(args);
	va_start(args, format);

	while (format[j])
	{
		switch (format[j++])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%s%c", separator, ch);
				printed = 1;
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				printed = 1;
				break;
			case 'f':
				flt = va_arg(args, double);
				printf("%s%f", separator, flt);
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
				{
					printf("%s%s", separator, str);
				}
				printed = 1;
				break;
			default:
				printed = 0;
		}
		if (printed)
			separator = ", ";
	}
	printf("\n");
	va_end(args);
}
