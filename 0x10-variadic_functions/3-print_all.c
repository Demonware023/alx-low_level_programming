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
	double flt;
	int num;
	char ch;

	va_list(args);
	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				ch = va_arg(args, int);
				printf("%c, ", ch);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d, ", num);
				break;
			case 'f':
				flt = va_arg(args, double);
				printf("%f, ", flt);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s ", str);
				}
				break;
		}
	}
	printf("\n");
	va_end(args);
}
